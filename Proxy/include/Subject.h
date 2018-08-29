//
// Created by coolsnowy on 2018/8/29.
//

#ifndef TEST_SUBJECT_H
#define TEST_SUBJECT_H

class Telcommunication {
public:
	Telcommunication() = default;
	virtual ~Telcommunication() = default;
	virtual void recharge(int money) = 0;
};

#endif //TEST_SUBJECT_H
