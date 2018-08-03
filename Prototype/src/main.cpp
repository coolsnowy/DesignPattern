#include "ConcretePrototype.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	Monkey *pSunWuKong = new SunWuKong("Sun Wu Kong");

	// clone it
	Monkey *p1 = pSunWuKong->clone();
	Monkey *p2 = pSunWuKong->clone();

	p1->play();
	p2->play();

	delete(pSunWuKong);
	delete(p1);
	delete(p2);
	return 0;
}