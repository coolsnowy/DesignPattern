//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_SUBJECT_H
#define TEST_SUBJECT_H


class Observer;

/*
 * 创建抽象主题
提供关于注册(添加)、注销（删除）、通知观察者的接口：
 */
class Subject {
public:
	virtual void attach(Observer *) = 0;  // 注册观察者
	virtual void detach(Observer *) = 0;  // 注销观察者
	virtual void notify() = 0;  // 通知观察者
};


#endif //TEST_SUBJECT_H
