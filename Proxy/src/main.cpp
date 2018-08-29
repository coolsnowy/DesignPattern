#include "Proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	Proxy* proxy = new Proxy();
	proxy->recharge(20);
	proxy->recharge(100);

	SAFE_DELETE(proxy);


	return 0;
}