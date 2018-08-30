//
// Created by coolsnowy on 2018/8/30.
//

#ifndef TEST_INVOKER_H
#define TEST_INVOKER_H

/*
 * 	• Invoker：要求命令对象执行请求，通常会持有命令对象，可以持有很多的命令对象。
 * 	这个是客户端真正触发命令并要求命令执行相应操作的地方，也就是说相当于使用命令对象的入口。

 */
#include <list>
#include "Command.h"

// 命令的持有者
class Invoker {
public:
	Invoker() = default;
	void addCmd(Command *cmd);  // 添加命令
	void deleteCmd(Command *cmd);  // 删除命令
	void notify();  // 执行命令

private:
	std::list<Command *> cmds;  // 命令队列
};

void Invoker::addCmd(Command *cmd) {
	cmds.push_back(cmd);
}

void Invoker::deleteCmd(Command *cmd) {
	cmds.remove(cmd);
}

void Invoker::notify() {
	std::list<Command *>::iterator it = cmds.begin();
	while (it != cmds.end()) {
		(*it)->execute();
		++it;
	}
}


#endif //TEST_INVOKER_H
