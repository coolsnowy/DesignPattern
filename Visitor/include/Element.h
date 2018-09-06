//
// Created by coolsnowy on 2018/9/5.
//

#ifndef TEST_ELEMENT_H
#define TEST_ELEMENT_H

// 	• Element（元素）：定义一个 accept() 操作，它通常以一个 Vistor 作为参数。

class Visitor;

// 地方
class Place
{
public:
	virtual ~Place() {}
	virtual void accept(Visitor *visitor) = 0;
};

#endif //TEST_ELEMENT_H
