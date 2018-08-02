

#ifndef TEST_PRODUCT_H
#define TEST_PRODUCT_H

#include <string>
using std::string;

class Car {
public:
	virtual string name() = 0;
	virtual ~Car() {}
};



#endif //TEST_PRODUCT_H
