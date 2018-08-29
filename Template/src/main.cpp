#include "ConcreteClass.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main() {
	// 阿里校招
	Company *alibaba = new Alibaba();
	alibaba->recruit();

	// 腾讯校招
	Company *tencent = new Tencent();
	tencent->recruit();

	SAFE_DELETE(tencent);
	SAFE_DELETE(alibaba);
	return 0;
}
