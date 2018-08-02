#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	// Benz
	AbstractFactory *pFactory =	AbstractFactory::createFactory(AbstractFactory::FactoryType::BENZFACTORY);
	Car *pCar = pFactory->createCar();
	Bike *pBike = pFactory->createBike();
	cout << "Benz Car name = " << pCar->name() << endl;
	cout << "Benz Bike name = " << pBike->name() << endl;
	delete(pFactory);
	delete(pCar);
	delete(pBike);
	// Bmw
	pFactory =	AbstractFactory::createFactory(AbstractFactory::FactoryType::BMWFACTORY);
	pCar = pFactory->createCar();
	pBike = pFactory->createBike();
	cout << "Bmw Car name = " << pCar->name() << endl;
	cout << "Bmw Bike name = " << pBike->name() << endl;
	delete(pFactory);
	delete(pCar);
	delete(pBike);
}