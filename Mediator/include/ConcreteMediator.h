//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_CONCRETEMEDIATOR_H
#define TEST_CONCRETEMEDIATOR_H

#include "Mediator.h"

//具体中介者的职责是遍历所有的参与者，将发送者的消息通知到每一个人：
class ConcreteMediator : public Mediator {
public:
	// 将发送者的消息发送给所有参与者（但不包括发送者自己）
	virtual void distributeMessage(const Colleague* sender, const std::string& message) const override {
		for (const Colleague* c : getColleagues())
			if (c != sender)  // 不要将消息发送给自己
				c->receiveMessage(sender, message);
	}
};
#endif //TEST_CONCRETEMEDIATOR_H

