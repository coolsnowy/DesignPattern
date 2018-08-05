//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_ADAPTEE_H
#define TEST_ADAPTEE_H

#include <iostream>

using namespace std;
// 自带的充电器 - 两脚扁型
class OwnCharger {
public:
	void chargeWithFeetFlat() {
		cout << "OwnCharger::ChargeWithFeetFlat" << endl;
	}
};

#endif //TEST_ADAPTEE_H
