//
// Created by coolsnowy on 2018/9/4.
//

#ifndef TEST_CONCRETEHANDLER_H
#define TEST_CONCRETEHANDLER_H

#include "Handler.h"


/*
 * 创建具体处理者
具体处理者包含 Manager、Director、CEO，它们的实现基本相同，只是批准的天数不一样：
 */

// 经理
class Manager : public Handler {
public:
	Manager() {}
	~Manager() {}
	virtual void handleRequest(float days) override {
		if (days <= 1) {
			std::cout << "Manager 批准了 " << days << " 天假" << std::endl;
		} else {
			pSuccessor->handleRequest(days);
		}
	}
};

// 总监
class Director : public Handler {
public:
	Director() {}
	~Director() {}
	virtual void handleRequest(float days) override {
		if (days <= 3) {
			std::cout << "Director 批准了 " << days << " 天假" << std::endl;
		} else {
			pSuccessor->handleRequest(days);
		}
	}
};

// 总裁
class CEO : public Handler {
public:
	CEO() {}
	~CEO() {}
	//注意： 由于 CEO 位于最高层（处于链的末尾），所以请求到此结束，不会继续向下传递。
	virtual void handleRequest(float days) override {
		if (days <= 7) {
			std::cout << "CEO 批准了 " << days << " 天假" << std::endl;
		} else {
			std::cout << "给你放长假，以后不用来上班啦！" << std::endl;
		}
	}
};


#endif //TEST_CONCRETEHANDLER_H
