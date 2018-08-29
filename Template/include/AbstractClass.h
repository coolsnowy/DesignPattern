//
// Created by coolsnowy on 2018/8/29.
//

#ifndef TEST_ABSTRACTCLASS_H
#define TEST_ABSTRACTCLASS_H

#include <iostream>

// 公司
class Company
{
public:
	virtual ~Company() = default;

	// 校园招聘
	void recruit() {
		std::cout << "---------- Begin ----------" << std::endl;
		careerTalk();
		receiveResume();
		interview();
		offer();
		std::cout << "---------- End ----------" << std::endl;
	}

	// 宣讲会
	void careerTalk() {
		std::cout << "Career Talk" << std::endl;
	}

	// 接收简历
	void receiveResume() {
		std::cout << "Receive Resume" << std::endl;
	}

	// following detail is implemented by derived class
	// 面试
	virtual void interview() = 0;

	// 发放 Offer
	virtual void offer() = 0;
};


#endif //TEST_ABSTRACTCLASS_H
