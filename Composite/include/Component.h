//
// Created by coolsnowy on 2018/8/8.
//

#ifndef TEST_COMPONENT_H
#define TEST_COMPONENT_H

#include <iostream>
#include <string>

using namespace std;

class Component
{
public:
	Component(string strName) : name(strName) {}
	virtual ~Component() = default;
	virtual void add(Component *cmpt) = 0;  // add a new Component
	virtual void remove(Component *cmpt) = 0;  // remove a existed Component
	virtual Component* getChild(int index) = 0;  // get the component
	virtual void operation(int indent) = 0;  // show the component （以缩进的方式）

private:
	Component();  // not allowed

protected:
	string name;
};

//安全模式 ： 与透明模式不同，这里已经没有了访问及管理子构件的接口，所有的接口都在 Composite 中
class Component1
{
public:
	Component1(string name) : m_strName(name) {}
	virtual ~Component1() {}
	virtual void Operation(int indent) = 0;  // 显示构件（以缩进的方式）

private:
	Component1();  // 不允许

protected:
	string m_strName;
};


#endif //TEST_COMPONENT_H
