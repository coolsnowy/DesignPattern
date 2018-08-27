#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include <ctime>

// 静态对象需要在类外定义
std::map<std::string, Player*> PlayerFactory::m_map = std::map<std::string, Player*>();

// 玩家类型和武器
static std::string s_playerType[2] = { "T", "CT" };
static std::string s_weapons[4] = { "AK-47", "Maverick", "Gut Knife", "Desert Eagle" };

#define GET_ARRAY_LEN(array, len) {len = (sizeof(array) / sizeof(array[0]));}

int main()
{
	srand((unsigned)time(nullptr));

	int playerLen;
	int weaponsLen;
	GET_ARRAY_LEN(s_playerType, playerLen);
	GET_ARRAY_LEN(s_weapons, weaponsLen);

	// 假设，游戏中有十位玩家
	for (int i = 0; i < 10; i++) {
		// 获取随机玩家和武器
		int typeIndex = rand() % playerLen;
		int weaponIndex = rand() % weaponsLen;
		std::string type = s_playerType[typeIndex];
		std::string weapon = s_weapons[weaponIndex];

		// 获取玩家
		Player *p = PlayerFactory::getPlayer(type);

		// 从武器库中随机分配武器
		p->assignWeapon(weapon);

		// 派玩家去执行任务
		p->mission();
	}

	return 0;
}