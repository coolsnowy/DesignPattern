//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_CONCRETECOLLEAGUE_H
#define TEST_CONCRETECOLLEAGUE_H

#include "Colleague.h"
#include <iostream>

// 具体同事类
class ConcreteColleague : public Colleague {
public:
	using Colleague::Colleague;

	// 通过中介者，将自己的消息发布出去
	virtual void sendMessage(const Mediator& mediator, const std::string& message) const override {
		mediator.distributeMessage(this, message);
	}

private:
	// 接收来自发送者的消息
	virtual void receiveMessage(const Colleague* sender, const std::string& message) const override {
		std::cout << getName() << " received the message from "
				  << sender->getName() << ": " << message << std::endl;
	}
};


#endif //TEST_CONCRETECOLLEAGUE_H
