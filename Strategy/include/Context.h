//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_CONTEXT_H
#define TEST_CONTEXT_H

#include "Strategy.h"

class Context {
public:
	Context(Strategy *strategy) {
		pStrategy = strategy;
	}
	void Travel() {
		pStrategy->Travel();
	}

private:
	Strategy *pStrategy;
};


#endif //TEST_CONTEXT_H
