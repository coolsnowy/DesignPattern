//
// Created by coolsnowy on 2018/8/29.
//

#ifndef TEST_REALSUBJECT_H
#define TEST_REALSUBJECT_H

#include <iostream>
#include "Subject.h"

class CMCC : public Telcommunication {
public:
	// offer the detail implementation of the recharge function
	void recharge(int money) override {
		std::cout << "Recharge " << money << std::endl;
	}
};

#endif //TEST_REALSUBJECT_H
