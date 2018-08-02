#include "singleton.h"

using std::cout;
using std::endl;

//Singleton::GC Singleton::GC::gc; // 重要

int main() {

	Singleton *object = Singleton::getInstance();
	return 0;
}