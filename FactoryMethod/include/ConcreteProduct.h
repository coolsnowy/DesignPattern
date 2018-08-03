//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_CONCRETEPRODUCT_H
#define TEST_CONCRETEPRODUCT_H

#include "Product.h"

class BenzCar : public Car{
public:
	string name() {
		return "Benz Car";
	}
};

class BmwCar : public Car{
public:
	string name() {
		return "Bmw Car";
	}
};


#endif //TEST_CONCRETEPRODUCT_H
