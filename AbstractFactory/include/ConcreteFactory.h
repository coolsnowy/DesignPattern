//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_CONCRETEFACTORY_H
#define TEST_CONCRETEFACTORY_H


#include "AbstractFactory.h"
#include "ConcreteProduct.h"


// Benz Factory
class BenzFactory : public AbstractFactory {
public:
	Car* createCar() {
		return new BenzCar();
	}

	Bike* createBike() {
		return new BenzBike();
	}
};

// Bmw Factory
class BmwFactory : public AbstractFactory {
public:
	Car* createCar() {
		return new BmwCar();
	}

	Bike* createBike() {
		return new BmwBike();
	}
};

#endif //TEST_CONCRETEFACTORY_H
