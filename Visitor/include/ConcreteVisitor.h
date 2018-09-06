//
// Created by coolsnowy on 2018/9/5.
//

#ifndef TEST_CONCRETEVISITOR_H
#define TEST_CONCRETEVISITOR_H


#include "Visitor.h"
#include "ConcreteElement.h"
#include <iostream>

//实现每个由 Visitor 声明的操作。

// 游客
class Tourist : public Visitor {
public:
	virtual void visit(BellTower *) override {
		std::cout << "I'm visiting the Bell Tower!" << std::endl;
	}

	virtual void visit(TerracottaWarriors *) override {
		std::cout << "I'm visiting the Terracotta Warriors!" << std::endl;
	}
};

// 清洁工
class Cleaner : public Visitor {
public:
	virtual void visit(BellTower *) override {
		std::cout << "I'm cleaning up the garbage of Bell Tower!" << std::endl;
	}

	virtual void visit(TerracottaWarriors *) override {
		std::cout << "I'm cleaning up the garbage of Terracotta Warriors!" << std::endl;
	}
};


#endif //TEST_CONCRETEVISITOR_H
