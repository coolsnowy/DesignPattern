//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_REFINEDABSTRACTION_H
#define TEST_REFINEDABSTRACTION_H

#include "Decorator.h"
#include <iostream>

using std::cout;
using std::endl;

/* add two kinds of condiment needs charge */

class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage *p) : CondimentDecorator(p) {}
	string name() {
		return pBeverage->name() + "Mocha";
	}

	double cost() {
		return pBeverage->cost() + 2.8;
	}
};

class Cream : public CondimentDecorator {
public:
	Cream(Beverage *p) : CondimentDecorator(p) {}
	string name() {
		return pBeverage->name() + "Cream";
	}

	double cost() {
		return pBeverage->cost() + 3.5;
	}
};


#endif //TEST_REFINEDABSTRACTION_H
