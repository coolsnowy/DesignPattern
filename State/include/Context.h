//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_CONTEXT_H
#define TEST_CONTEXT_H

#include "ConcreteState.h"
/*
 * 	• Context（上下文）：定义一个与 Client 交互的接口。它维护对 ConcreteState 对象的引用，可以用该对象来定义当前状态。
 */
//上下文由 TrafficLights 表示，该类有一个 IState 变量，在构造中被初始化为 RedLight（红灯）：
// 交通信号灯
class TrafficLights {
public:
	TrafficLights() {
		pState = new RedLight(this);
	}
	void SetState(State* state) {
		pState = state;
	}
	void Request() {
		pState->handle();
	}

private:
	State* pState;
};


#endif //TEST_CONTEXT_H
