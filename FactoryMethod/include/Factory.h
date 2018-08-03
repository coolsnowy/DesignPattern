//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_FACTORY_H
#define TEST_FACTORY_H

#include "ConcreteProduct.h"

class Factory {
public:
	virtual Car* createCar() = 0;
	virtual ~Factory() = default;
};


#endif //TEST_FACTORY_H
