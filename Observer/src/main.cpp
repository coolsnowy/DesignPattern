#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	// 创建主题、观察者
	ConcreteSubject *pSubject = new ConcreteSubject();
	Observer *pObserver1 = new ConcreteObserver("Jack Ma");
	Observer *pObserver2 = new ConcreteObserver("Pony");

	// 注册观察者
	pSubject->attach(pObserver1);
	pSubject->attach(pObserver2);

	// 更改价格，并通知观察者
	pSubject->setPrice(12.5);
	pSubject->notify();

	// 注销观察者
	pSubject->detach(pObserver2);
	// 再次更改状态，并通知观察者
	pSubject->setPrice(15.0);
	pSubject->notify();

	SAFE_DELETE(pObserver1);
	SAFE_DELETE(pObserver2);
	SAFE_DELETE(pSubject);


	return 0;
}