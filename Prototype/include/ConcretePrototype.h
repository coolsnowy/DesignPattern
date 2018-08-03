
#ifndef TEST_CONCRETEPROTOTYPE_H
#define TEST_CONCRETEPROTOTYPE_H

#include "Prototype.h"
#include <string>
#include <iostream>

using std::string;

// Sun wu kong
class SunWuKong : public Monkey {
public:
	SunWuKong(string strName) : name(strName) {}
	~SunWuKong() = default;
	SunWuKong(SunWuKong &right) {
		name = right.name;
	}
	Monkey* clone() {
		return new SunWuKong(*this);
	}
	void play() {
		std::cout << "Name = " << "plat golden stick" << std::endl;
	}
private:
	string name;
};


#endif //TEST_CONCRETEPROTOTYPE_H
