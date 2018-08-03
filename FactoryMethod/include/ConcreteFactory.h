#ifndef TEST_CONCRETEFACTORY_H
#define TEST_CONCRETEFACTORY_H

#include "Factory.h"

class BenzFactory : public Factory {
public:
	Car* createCar() {
		return new BenzCar();
	}
};


class BmwFactory : public Factory {
public:
	Car* createCar() {
		return new BmwCar();
	}
};



#endif //TEST_CONCRETEFACTORY_H
