//
// Created by coolsnowy on 2018/8/31.
//

#ifndef TEST_MEDIATOR_H
#define TEST_MEDIATOR_H

#include <list>
#include "Colleague.h"

//由于中介需要和所有参与者打交道，所以它除了注册参与者之外，还需要将发送者的消息传递出去：
class Colleague;

// 抽象中介者
class Mediator {
public:
	// 注册参与者
	virtual void registerColleague(Colleague* colleague) {
		colleagues.emplace_back(colleague);
	}
	const std::list<Colleague*>& getColleagues() const {
		return colleagues;
	}

	// 将发送者的消息发送给所有参与者
	virtual void distributeMessage(const Colleague* sender, const std::string& message) const = 0;

private:
	std::list<Colleague*> colleagues;
};

#endif //TEST_MEDIATOR_H
