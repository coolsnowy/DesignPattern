//
// Created by coolsnowy on 2018/8/29.
//

#ifndef TEST_CONCRETECLASS_H
#define TEST_CONCRETECLASS_H

#include "AbstractClass.h"
#include <iostream>

// 阿里
class Alibaba : public Company
{
public:
	virtual void interview() override {
		std::cout << "First interview -> Second interview -> Third interview" << std::endl;
	}

	virtual void offer() override {
		std::cout << "30W" << std::endl;
	}
};

// 腾讯
class Tencent : public Company
{
public:
	virtual void interview() override {
		std::cout << "First interview -> Second interview" << std::endl;
	}

	virtual void offer() override {
		std::cout << "25W" << std::endl;
	}
};



#endif //TEST_CONCRETECLASS_H
