//
// Created by coolsnowy on 2018/8/27.
//

#ifndef TEST_CONCRETEFLYWEIGHT_H
#define TEST_CONCRETEFLYWEIGHT_H

#include "Flyweight.h"

// 恐怖分子
class Terrorist : public Player
{
public:
	Terrorist() {
		task = "Plant a bomb";
	}

	virtual void assignWeapon(std::string iweapon) override {
		weapon = iweapon;
	}

	virtual void mission() override {
		std::cout << "Terrorist with weapon " + weapon + "," + " Task is " + task << std::endl;
	}
};

// 反恐精英
class CounterTerrorist : public Player
{
public:
	CounterTerrorist() {
		task = "Diffuse bomb";
	}

	virtual void assignWeapon(std::string iweapon) override {
		weapon = iweapon;
	}

	virtual void mission() override {
		std::cout << "Counter Terrorist with weapon " + weapon + "," + " Task is " + task << std::endl;
	}
};



#endif //TEST_CONCRETEFLYWEIGHT_H
