//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_IMPLEMENTOR_H
#define TEST_IMPLEMENTOR_H

#include "Component.h"

// 调味品

class CondimentDecorator : public Beverage {
public:
	CondimentDecorator(Beverage *p) : pBeverage(p) {}
	string name() {
		return pBeverage->name();
	}

	double cost() {
		return pBeverage->cost();
	}
protected:
	Beverage *pBeverage;
};

#endif //TEST_IMPLEMENTOR_H
