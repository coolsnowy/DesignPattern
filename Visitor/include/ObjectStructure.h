//
// Created by coolsnowy on 2018/9/5.
//

#ifndef TEST_OBJECTSTRUCTURE_H
#define TEST_OBJECTSTRUCTURE_H
/*
 * 	• ObjectStructure（对象结构）：能够枚举它的元素，同时提供一个高层的接口，以允许访问者访问它的元素。
 */
/*创建对象结构
		添加景点，并为每一个景点添加访问者：*/
#include "Element.h"
#include <list>

// 城市（西安）
class City
{
public:
	void attach(Place *place) {
		m_places.push_back(place);
	}

	void detach(Place *place) {
		m_places.remove(place);
	}

	void accept(Visitor *visitor) {
		// 为每一个 element 设置 visitor，进行对应的操作
		for (std::list<Place*>::iterator it = m_places.begin(); it != m_places.end(); ++it) {
			(*it)->accept(visitor);
		}
	}

private:
	std::list<Place *> m_places;
};


#endif //TEST_OBJECTSTRUCTURE_H
