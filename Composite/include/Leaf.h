//
// Created by coolsnowy on 2018/8/8.
//

#ifndef TEST_LEAF_H
#define TEST_LEAF_H

#include "Component.h"


class Leaf : public Component {
public:
	Leaf(string strName) : Component(strName) {}
	virtual ~Leaf() = default;
	void add(Component *cmpt) {
		cout << "Can't add to a Leaf" << endl;
	}
	void remove(Component *cmpt) {
		cout << "Can't remove from a Leaf" << endl;
	}
	Component* getChild(int index) {
		cout << "Can't get child from a Leaf" << endl;
		return nullptr;
	}
	void operation(int indent) {
		string newStr(indent, '-');
		cout << newStr << " " << name <<endl;
	}


private:
	Leaf();  // not allowed to create a new leaf
};



//注意： 与透明模式不同，这里已经没有了访问及管理子构件的接口，所有的接口都在 Composite 中，不再赘述（同上）。
class Leaf1 : public Component1
{
public:
	Leaf1(string name) : Component1(name){}
	virtual ~Leaf1(){}
	void Operation(int indent) {
		string newStr(indent, '-');
		cout << newStr << " " << m_strName <<endl;
	}

private:
	Leaf1();  // 不允许
};


#endif //TEST_LEAF_H
