#ifndef RECIEVER_H
#define RECIEVER_H

#include <iostream>

// 司机， 接收者，真正执行命令
class Reciever {
public:
	void takeOrder();  // 接单
	void receipt();  // 收款
};

// 接单
void Reciever::takeOrder()
{
	std::cout << "Take order接单..." << std::endl;
}

// 收款
void Reciever::receipt()
{
	std::cout << "Receipt money收钱..." << std::endl;
}

#endif // RECIEVER_H
