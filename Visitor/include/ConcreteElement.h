//
// Created by coolsnowy on 2018/9/5.
//

#ifndef TEST_CONCRETEELEMENT_H
#define TEST_CONCRETEELEMENT_H

//创建具体元素
//具体元素有两个 - 钟楼、兵马俑，它们实现了 Accept() 方法：


#include "Element.h"
#include "Visitor.h"
#include <iostream>

/*
 * 注意： 在 Accept() 方法中，通过调用 Visitor 的 visit() 方法（以当前对象为参数）来实现对景点的访问。
 */
// 钟楼
class BellTower : public Place
{
public:
	virtual void accept(Visitor *visitor) override {
		std::cout << "Bell Tower is accepting visitor." << std::endl;
		visitor->visit(this);
	}
};

// 兵马俑
class TerracottaWarriors : public Place
{
public:
	virtual void accept(Visitor *visitor) override {
		std::cout << "Terracotta Warriors is accepting visitor." << std::endl;
		visitor->visit(this);
	}
};

#endif //TEST_CONCRETEELEMENT_H
