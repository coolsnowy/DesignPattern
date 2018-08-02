//
// Created by coolsnowy on 2018/8/2.
//

#include "singleton.h"

// 懒汉式
/*
Singleton* Singleton::pSingleton = nullptr;

Singleton* Singleton::getInstance() {
	if(pSingleton == nullptr) {
		pSingleton = new Singleton();
	}
	return pSingleton;
}
 */



// 饿汉式
/*
Singleton* Singleton::pSingleton = new Singleton();
Singleton* Singleton::getInstance() {
	return pSingleton;
}
 */

// 单例 - 懒汉式（双检锁 DCL 机制）
/*
Singleton *Singleton::pSingleton = nullptr;

Singleton *Singleton::getInstance()
{
	if (pSingleton == nullptr)
		//自解锁，不需要手动加锁解锁
		std::lock_guard<std::mutex> lock(singletonMutex);
		pSingleton = new Singleton();

	return pSingleton;
}

*/

/*
 * 在C++的类定义内，static成员前的static意思是对一个变量的声明，而非定义。
 * 静态成员变量的初始化通常必须在类的定义外，即.cpp文件里而不是.h里。
 * 只有少数几种例外情况下允许对静态成员进行类内初始化（in-class initialization），
 * 它们是：1. static const members of integral or enumeration type.
 * 2. 在C++11之后，标记为constexpr的LiteralType静态成员也可以进行类内初始化。
 */

// here is important
Singleton::GC Singleton::GC::gc; // 重要
Singleton *Singleton::pSingleton = nullptr;

Singleton* Singleton::getInstance() {
	if(pSingleton == nullptr) {
		pSingleton = new Singleton();
	}
	return pSingleton;
}