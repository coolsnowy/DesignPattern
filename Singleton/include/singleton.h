#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>

/*
 * not a real singleton, because we still can use default assignment and copy construct, which is produce by compiler
 * By this way, we can create many object, which will violate the singleton pattern
 */
/*
class Singleton {
public:
	static Singleton& getInstance() {
		static Singleton instance; // static variable, only create once
		return instance;
	}
private:
	Singleton() {}
};
*/


// first way to implement singleton
/*
class Singleton {
public:
    // modify: return a pointer to prevent copy singleton instance
    static Singleton* getInstance() {
        static Singleton instance;
        return &instance;
    }
private:
    Singleton() {}

};
*/



// second way to implement signleton
/*
class Singleton {
public:
    // modify: return a pointer to prevent copy singleton instance
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
    void doSomething() {
            std::cout << "Do something" << std::endl;
    }

private:
    Singleton() {}
    // the following two function no need to define
    // we just declare them here to prevent assignment and copy construct
    Singleton(Singleton &);
    Singleton& operator=(Singleton &);
};
*/

// 懒汉式/饿汉式 通用头文件
/*
class Singleton {
public:
	static Singleton* getInstance();
	void doSomething() {
		std::cout << "Do something" << std::endl;
	}
private:
	Singleton() {}
private:
	static Singleton *pSingleton;	// pointer to Singleton Object

};
 */


// 懒汉式用于多线程存在隐患，需要使用双检锁
/*
class Singleton {
public:
	static Singleton* getInstance();
	void doSomething() {
		std::cout << "Do something" << std::endl;
	}
private:
	Singleton() {}
	static std::mutex singletonMutex;
	static Singleton *pSingleton;	// pointer to Singleton Object

};
 */


// 单例 - 懒汉式/饿汉式公用, 自动释放资源

class Singleton
{
public:
	static Singleton* getInstance();
	// 	若手动释放，需要定义此函数，并在资源不用时手动释放
	//    static void DestoryInstance()
	//    {
	//        if (m_pSingleton != NULL) {
	//            delete m_pSingleton;
	//            m_pSingleton = NULL;
	//        }
	//    }

private:
	Singleton() {}  // 构造函数（被保护）

private:
	static Singleton *pSingleton;  // 指向单例对象的指针

	// GC 机制
	class GC
	{
	public:
		~GC()
		{
			// 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
			if (pSingleton != nullptr) {
				std::cout << "Here destroy the m_pSingleton automatic..." << std::endl;
				delete pSingleton;
				pSingleton = nullptr;
			}
		}
		static GC gc;  // 用于释放单例
	};
};




#endif
