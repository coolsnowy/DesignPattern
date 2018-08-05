//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_ABSTRATION_H
#define TEST_ABSTRATION_H

#include "Implementor.h"

class Switch {
public:
	Switch(ElectricalEquipment *ee) : pEe(ee) {}
	virtual ~Switch() = default;

	// power on and power off the electrical equipment
	virtual void on() = 0;
	virtual void off() = 0;

protected:
	// because derived class will use this member
	ElectricalEquipment *pEe;
};
#endif //TEST_ABSTRATION_H
