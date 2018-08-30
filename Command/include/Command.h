
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "Receiver.h"

class Reciever;

/*
 * 	• Command：定义命令的接口，声明执行的方法。
ConcreteCommand：命令接口实现对象，是“虚”的实现；通常会持有接收者，并调用接收者的功能来完成命令要执行的操作。
 */
//Command 是一个抽象类，将被用作执行命令的接口。其他的 ConcreteCommand 类派生自它，提供了具体的命令（打车/付款）。
class Command {
public:
	Command(Reciever *reciever) : pReciever(reciever) {

	}
	virtual void execute() = 0;  // 执行命令的接口
protected:
	Reciever *pReciever;
};

// 以下为具体命令类
// 打车
class TakeCommand : public Command {
public:
	TakeCommand(Reciever *reciever) : Command(reciever) {

	}
	void execute() {
		std::cout << "Take car..." << std::endl;
		pReciever->takeOrder();

	}
};

// 付款
class PayCommand : public Command {
public:
	PayCommand(Reciever *receiver) : Command(receiver) {

	}
	void execute() {
		std::cout << "Pay charge..." << std::endl;
		pReciever->takeOrder();

	}
};


#endif