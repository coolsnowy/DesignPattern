//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_CONCRETEOBSERVER_H
#define TEST_CONCRETEOBSERVER_H

/*
 * 创建具体观察者
抽象观察者的具体实现，当接收到通知后，调整对应的价格：

 */

#include "Observer.h"
#include <iostream>
#include <string>

using namespace std;

// 具体观察者
class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(string name) {
		strName = name;
	}

	void update(double price)  override {
		cout << "update: " << strName << " - price: " << price << "\n";
	}

private:
	string strName;  // 名字
};

#endif //TEST_CONCRETEOBSERVER_H
