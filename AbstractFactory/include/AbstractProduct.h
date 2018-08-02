//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_PRODUCT_H
#define TEST_PRODUCT_H

#include <string>

/*
 * in our code, we need two abstract products -- automobile and bicyle
 */
 // create abstract product
 // abstract base class
 class Car {
 public:
 	// pure virtual function
 	virtual std::string name() = 0; // name of car
 };

 class Bike {
 public:
	virtual std::string name() = 0; // name of  bike
 };

#endif //TEST_PRODUCT_H
