#include "Factory.h"
#include "ConcreteFactory.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	// Benz
	Factory* pFactory = new BenzFactory();
	Car *pCar = pFactory->createCar();
	cout << "Benz Car = " << pCar->name() << endl;
	delete(pFactory);
	delete(pCar);

	// Bmw
	pFactory = new BmwFactory();
	pCar = pFactory->createCar();
	cout << "Bmw Car = " << pCar->name() << endl;
	delete(pFactory);
	delete(pCar);
	return 0;
}