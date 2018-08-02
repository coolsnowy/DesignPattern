//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_FACTORY_H
#define TEST_FACTORY_H

#include "ConcreteProduct.h"

class Factory {
public:
	enum CAR_TYPE {
		BENZ_CAR,
		BMW_CAR
	};

	Car* createCar(CAR_TYPE type) {
		Car *pCar = nullptr;
		switch(type) {
			case CAR_TYPE::BENZ_CAR :
				pCar = new BenzCar();
				break;
			case CAR_TYPE::BMW_CAR :
				pCar = new BmwCar();
				break;
			default:
				break;
		}
		return pCar;
	}
};


#endif //TEST_FACTORY_H
