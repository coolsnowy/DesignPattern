#include "ConcreteHandler.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	Handler *manager = new Manager();
	Handler *director = new Director();
	Handler *ceo = new CEO();

	// 职责链：经理 -> 总监 -> 总裁
	manager->setSuccessor(director);
	director->setSuccessor(ceo);

	manager->handleRequest(1);
	manager->handleRequest(2);
	manager->handleRequest(5);
	manager->handleRequest(10);

	SAFE_DELETE(manager);
	SAFE_DELETE(director);
	SAFE_DELETE(ceo);

	getchar();

	return 0;
}