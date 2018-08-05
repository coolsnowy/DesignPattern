//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_IMPLEMENTOR_H
#define TEST_IMPLEMENTOR_H

class ElectricalEquipment {
public:
	virtual ~ElectricalEquipment() = default;
	virtual void powerOn() = 0;
	virtual void powerOff() = 0;

};
#endif //TEST_IMPLEMENTOR_H
