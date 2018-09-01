//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_STRATEGY_H
#define TEST_STRATEGY_H

// 出行策略
class Strategy {
public:
	virtual void Travel() = 0;
	virtual ~Strategy() = default;
};


#endif //TEST_STRATEGY_H
