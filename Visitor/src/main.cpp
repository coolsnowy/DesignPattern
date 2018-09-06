#include "ConcreteVisitor.h"
#include "ObjectStructure.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main() {
	City *city = new City();

	// 景点 - 钟楼、兵马俑
	Place *bellTower = new BellTower();
	Place *warriors = new TerracottaWarriors();

	// 访问者 - 游客、清洁工
	Visitor *tourist = new Tourist();
	Visitor *cleaner = new Cleaner();

	// 添加景点
	city->attach(bellTower);
	city->attach(warriors);

	// 接受访问
	city->accept(tourist);
	city->accept(cleaner);

	SAFE_DELETE(cleaner);
	SAFE_DELETE(tourist);
	SAFE_DELETE(warriors);
	SAFE_DELETE(bellTower);
	SAFE_DELETE(city);

	return 0;
}
