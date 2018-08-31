//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_COLLEAGUE_H
#define TEST_COLLEAGUE_H

#include "Mediator.h"
#include <string>

//由于房东和租客均由同事类表示，所以既需要（房东）发送消息，又需要（租客）接收消息
class Mediator;

// 抽象同事类
class Colleague {
public:
	Colleague(const std::string& name) : strName (name) {}
	std::string getName() const {
		return strName;
	}
	virtual ~Colleague() = default;

	// 通过中介者，将自己的消息发布出去
	virtual void sendMessage(const Mediator& mediator, const std::string& message) const = 0;

	// 接收来自发送者的消息
	virtual void receiveMessage(const Colleague* sender, const std::string& message) const = 0;

private:
	std::string strName;
};

#endif //TEST_COLLEAGUE_H
