//
// Created by coolsnowy on 2018/8/27.
//

#ifndef TEST_FLYWEIGHTFACTORY_H
#define TEST_FLYWEIGHTFACTORY_H


#include "ConcreteFlyweight.h"
#include <map>

// 用于获取玩家
class PlayerFactory
{
public:
	// 如果 T/CT 对象存在，则直接从享元池获取；否则，创建一个新对象并添加到享元池中，然后返回。
	static Player* getPlayer(std::string type)
	{
		Player *p = NULL;
		if (m_map.find(type) != m_map.end()) {
			p = m_map[type];
		} else {
			// 创建 T/CT 对象
			if (type == "T") {
				std::cout << "Terrorist Created" << std::endl;
				p = new Terrorist();
			}
			else if (type == "CT") {
				std::cout << "Counter Terrorist Created" << std::endl;
				p = new CounterTerrorist();
			}
			else {
				std::cout << "Unreachable code!" << std::endl;
			}
			// 一旦创建，将其插入到 map 中
			m_map.insert(std::make_pair(type, p));
		}
		return p;
	}

private:
	// 存储 T/CT 对象（享元池）
	// 注意！！！此处为静态对象，只是声明，在类外使用需要定义
	static std::map<std::string, Player*> m_map;
};


#endif //TEST_FLYWEIGHTFACTORY_H
