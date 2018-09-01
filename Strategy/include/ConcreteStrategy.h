//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_CONCRETESTRATEGY_H
#define TEST_CONCRETESTRATEGY_H

#include "Strategy.h"
#include <iostream>

// 骑自行车
class BikeStrategy : public Strategy {
public:
	virtual void Travel() override {
		std::cout << "Travel by bike" << std::endl;
	}
};

// 开车
class CarStrategy : public Strategy {
public:
	virtual void Travel() override {
		std::cout << "Travel by car" << std::endl;
	}
};

// 坐火车
class TrainStrategy : public Strategy {
public:
	virtual void Travel() override {
		std::cout << "Travel by train" << std::endl;
	}
};


#endif //TEST_CONCRETESTRATEGY_H
