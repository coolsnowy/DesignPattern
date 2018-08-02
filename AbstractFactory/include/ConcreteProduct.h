//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_CONCRETEPRODUCT_H
#define TEST_CONCRETEPRODUCT_H

#include "AbstractProduct.h"
/********************Car****************/
// Benz car
class BenzCar : public Car {
public:
	std::string name() {
		return "Benz Car";
	}
};

// BMW car
class BmwCar : public Car {
public:
	std::string name() {
		return "BMW Car";
	}
};


/********************Bike****************/
// Benz bike
class BenzBike : public Bike {
public:
	std::string name() {
		return "Benz Bike";
	}
};

// Bmw bike
class BmwBike : public Bike {
public:
	std::string name() {
		return "Bmw Bike";
	}
};


#endif //TEST_CONCRETEPRODUCT_H
