//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_ABSTRATION_H
#define TEST_ABSTRATION_H

#include <string>

using namespace std;

// base class of all king of drinks
class Beverage {
public:
	virtual string name() = 0;
	virtual double cost() = 0;
	virtual ~Beverage() = default;
};

#endif //TEST_ABSTRATION_H
