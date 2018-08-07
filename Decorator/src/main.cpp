#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	// black coffee
	Beverage *pBlackCoffee = new BlackCoffee();
	cout << pBlackCoffee->name() << " : " << pBlackCoffee->cost() << endl;

	// black coffee and cream
	CondimentDecorator *pCream = new Cream(pBlackCoffee);
	cout << pCream->name() << " ： " << pCream->cost() << endl;

	// black coffee and mocha
	CondimentDecorator *pMocha = new Mocha(pBlackCoffee);
	cout << pMocha->name() << " ： " << pMocha->cost() << endl;

	delete(pBlackCoffee);
	delete(pCream);
	delete(pMocha);


	// Green Tea
	Beverage *pGreenTea = new GreenTea();
	cout << pGreenTea->name() << " : " << pGreenTea->cost() << endl;

	// green tea and cream
	pCream = new Cream(pGreenTea);
	cout << pCream->name() << " ： " << pCream->cost() << endl;

	// black coffee and mocha
	pMocha = new Mocha(pGreenTea);
	cout << pMocha->name() << " ： " << pMocha->cost() << endl;

	delete(pGreenTea);
	delete(pCream);
	delete(pMocha);
	return 0;

}