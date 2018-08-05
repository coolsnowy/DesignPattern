//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_CONCRETEIMPLEMENTOR_H
#define TEST_CONCRETEIMPLEMENTOR_H

#include "Implementor.h"

#include <iostream>

using std::cout;
using std::endl;

// light
class Light : public ElectricalEquipment {
	void powerOn() override {
		cout << "Light is on " << endl;
	}
	void powerOff() override {
		cout << "Light is off " << endl;
	}
};

class Fan : public ElectricalEquipment {
	void powerOn() override {
		cout << "Fan is on " << endl;
	}
	void powerOff() override {
		cout << "Fan is off " << endl;
	}
};

#endif //TEST_CONCRETEIMPLEMENTOR_H
