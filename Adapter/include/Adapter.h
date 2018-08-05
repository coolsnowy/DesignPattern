//
// Created by coolsnowy on 2018/8/5.
//

#include "Adaptee.h"
#include "Target.h"

#ifndef TEST_ADAPTER_H
#define TEST_ADAPTER_H

// 对象适配器
class PowerAdapter : public RussiaSocket {
public:
	PowerAdapter() : pCharger(new OwnCharger()) {

	}

	~PowerAdapter() {
		if(pCharger) {
			delete(pCharger);
			pCharger = nullptr;
		}
	}

	void charge() {
		//  使用自带的充电器（两脚扁型）充电
		pCharger->chargeWithFeetFlat();
	}
private:
	OwnCharger *pCharger;
};


// 类适配器
class ClassPowerAdapter : public RussiaSocket, OwnCharger
{
public:
	ClassPowerAdapter() {}
	void charge() {
		// 使用自带的充电器（两脚扁型）充电
		chargeWithFeetFlat();
	}
};

#endif //TEST_ADAPTER_H
