//
// Created by coolsnowy on 2018/9/5.
//

#ifndef TEST_VISITOR_H
#define TEST_VISITOR_H


class BellTower; // 钟楼
class TerracottaWarriors; // 兵马俑

// 访问者
//为对象结构中每一个 ConcreteElement 声明一个 visit() 操作，从这个操作的名称或参数类型可以清楚知道需要访问的具体元素的类型。
class Visitor {
public:
	virtual ~Visitor() {}
	virtual void visit(BellTower *) = 0;
	virtual void visit(TerracottaWarriors *) = 0;
};



#endif //TEST_VISITOR_H
