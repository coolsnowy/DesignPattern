//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_REFINEDABSTRACTION_H
#define TEST_REFINEDABSTRACTION_H

#include "Abstration.h"
#include <iostream>

using std::cout;
using std::endl;

// 拉链式开关
class PullChainSwitch : public Switch {
public:
	PullChainSwitch(ElectricalEquipment *ee) : Switch(ee) {

	}

	void on() override {
		cout << "Power on the equipment with the pull chain switch" << endl;
		pEe->powerOn();
	}

	void off() override {
		cout << "Power off the equipment with the pull chain switch" << endl;
		pEe->powerOff();
	}
};

// 按压式开关

class PushSwitch : public Switch {
public:
	PushSwitch(ElectricalEquipment *ee) : Switch(ee) {

	}

	void on() override {
		cout << "Power on the equipment with the push switch" << endl;
		pEe->powerOn();
	}

	void off() override {
		cout << "Power off the equipment with the push switch" << endl;
		pEe->powerOff();
	}
};

#endif //TEST_REFINEDABSTRACTION_H
