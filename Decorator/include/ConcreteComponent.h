//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_CONCRETEIMPLEMENTOR_H
#define TEST_CONCRETEIMPLEMENTOR_H

/* detail of beverage */
#include "Component.h"

// blackCoffee
class BlackCoffee : public Beverage {
public:
	string name() {
		return "BlackCoffee" ;
	}

	double cost() {
		return 30.0;
	}
};

// GreenTea
class GreenTea : public Beverage {
public:
	string name() {
		return "GreenTea";
	}

	double cost() {
		return 28.0;
	}

};

#endif //TEST_CONCRETEIMPLEMENTOR_H
