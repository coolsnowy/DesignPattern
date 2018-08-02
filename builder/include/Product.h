//
// Created by coolsnowy on 2018/8/2.
//

#ifndef TEST_PRODUCT_H
#define TEST_PRODUCT_H

#include <iostream>
using std::string;

// product
class Computer {
public:
	void setCpu(string strCpu) {
		cpu = strCpu;
	}

	void setMainBoard(string strMainBoard) {
		mainBoard = strMainBoard;
	}

	void setRam(string strRam) {
		ram = strRam;
	}

	string getCpu() {
		return cpu;
	}

	string getMainBoard() {
		return mainBoard;
	}

	string getRam() {
		return ram;
	}
private:
	string cpu;	// cpu
	string mainBoard;	// main board
	string ram;	// memory
};


#endif //TEST_PRODUCT_H
