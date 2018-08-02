//
// Created by coolsnowy on 2018/8/2.
//

#include "AbstractFactory.h"
#include "ConcreteFactory.h"

AbstractFactory* AbstractFactory::createFactory(FactoryType factory) {
	AbstractFactory *pFactory = nullptr;
	switch(factory) {
		case FactoryType::BENZFACTORY :
			// Benz factory
			pFactory = new BenzFactory();
			break;
		case FactoryType::BMWFACTORY :
			// Bmw factory
			pFactory = new BmwFactory();
			break;
		default:
			break;
	}
	return pFactory;
}
