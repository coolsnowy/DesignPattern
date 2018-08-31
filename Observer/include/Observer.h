//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_OBSERVER_H
#define TEST_OBSERVER_H

/*
 * 创建抽象观察者
提供一个 Update() 接口，用于更新价格：
 */

 class Observer {
 public:
 	virtual void update(double price) = 0;
 };
#endif //TEST_OBSERVER_H
