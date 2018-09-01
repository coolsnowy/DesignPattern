//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_STATE_H
#define TEST_STATE_H


//State（抽象状态）：定义接口，来声明每个 ConcreteState 应该做什么。
// 信号灯的状态
class State {
public:
	virtual void handle() = 0;
	virtual ~State() = default;
};

#endif //TEST_STATE_H
