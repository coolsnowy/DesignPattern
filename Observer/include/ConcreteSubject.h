//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_CONCRETESUBJECT_H
#define TEST_CONCRETESUBJECT_H

#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <list>

using namespace std;

// 具体主题
/*
 * 创建具体主题
抽象主题的具体实现，用于管理所有的观察者：
 */
class ConcreteSubject : public Subject {
public:
	ConcreteSubject() {
		fPrice = 10.0;
	}

	void setPrice(float price) {
		fPrice = price;
	}

	void attach(Observer *observer) override {
		observers.push_back(observer);
	}

	void detach(Observer *observer) override {
		observers.remove(observer);
	}

	void notify() override {
		list<Observer *>::iterator it = observers.begin();
		while (it != observers.end()) {
			(*it)->update(fPrice);
			++it;
		}
	}

private:
	list<Observer *> observers;  // 观察者列表
	double fPrice;  // 价格
};



#endif //TEST_CONCRETESUBJECT_H
