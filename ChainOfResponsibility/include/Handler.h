//
// Created by coolsnowy on 2018/9/4.
//

#ifndef TEST_HANDLER_H
#define TEST_HANDLER_H

//创建抽象处理者
//抽象处理者除了提供一个处理请假的接口之外，还有一个很关键的地方就是定义后继者，这样便可以构建一条链：

#include <iostream>

// 抽象处理者
class Handler {
public:
	Handler() {
		pSuccessor = nullptr;
	}
	virtual ~Handler() = default;
	void setSuccessor(Handler *successor) {
		pSuccessor = successor;
	}
	virtual void handleRequest(float days) = 0;

protected:
	Handler *pSuccessor;  // 后继者
};


#endif //TEST_HANDLER_H
