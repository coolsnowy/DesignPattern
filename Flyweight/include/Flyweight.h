//
// Created by coolsnowy on 2018/8/27.
//

#ifndef TEST_FLYWEIGHT_H
#define TEST_FLYWEIGHT_H

#include <iostream>
#include <string>

// 玩家 - 有武器和使命
// 使命不会变，是内部状态
// 武器是每个人独立的
class Player
{
public:
	virtual ~Player() = default;

	// 分配武器
	virtual void assignWeapon(std::string weapon) = 0;

	// 使命
	virtual void mission() = 0;

protected:
	std::string task; // 内部状态
	std::string weapon; // 外部状态
};


#endif //TEST_FLYWEIGHT_H
