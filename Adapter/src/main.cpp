#include "Adapter.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {
	// 对象适配器

	// 创建适配器
	RussiaSocket *pAdapter = new PowerAdapter();

	// 充电
	pAdapter->charge();

	// 类适配器

	ClassPowerAdapter powerAdapter;
	powerAdapter.charge();

	delete(pAdapter);


	return 0;

}