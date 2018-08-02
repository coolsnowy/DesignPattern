#include "Factory.h"


#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	Factory *pFactory = new Factory();

	Car *pCar = pFactory->createCar(Factory::CAR_TYPE::BENZ_CAR);
	cout << pCar->name() << endl;
	delete(pCar);

	pCar = pFactory->createCar(Factory::CAR_TYPE::BMW_CAR);
	cout << pCar->name() << endl;
	delete(pCar);

	return 0;
}