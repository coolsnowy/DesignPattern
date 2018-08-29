//
// Created by coolsnowy on 2018/8/29.
//

#ifndef TEST_PROXY_H
#define TEST_PROXY_H

#include "Subject.h"
#include "RealSubject.h"
#include <iostream>

class Proxy : public Telcommunication {
public:
	Proxy() : pCMCC(nullptr) {

	}
	~Proxy() {
		delete(pCMCC);
	}

	void recharge(int money) override {
		// only recharge if money > 50
		if(money > 50) {
			if(pCMCC == nullptr) {
				pCMCC = new CMCC();
			}
			pCMCC->recharge(money);
			std::cout << "Recharge success(" << money << ")\n";
		} else {
			std::cout << "Too little, only recharge if money more than fifty" << std::endl;
		}
	}
private:
	CMCC *pCMCC;
};

#endif //TEST_PROXY_H
