//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_ABSTRACTFACTORY_H
#define TEST_ABSTRACTFACTORY_H

#include "AbstractProduct.h"
class AbstractFactory {
public:
	enum FactoryType {
		BENZFACTORY,
		BMWFACTORY
	};
	virtual Car* createCar() = 0;	// create car
	virtual Bike* createBike() = 0;	// create bike
	static AbstractFactory* createFactory(FactoryType factory);	// create factory

};


#endif //TEST_ABSTRACTFACTORY_H
