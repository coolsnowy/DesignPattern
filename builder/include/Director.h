

#ifndef TEST_DIRECTOR_H
#define TEST_DIRECTOR_H


#include "Builder.h"
class Director {
public:
	void Create(Builder *builder) {
		builder->buildCpu();
		builder->buildMainBoard();
		builder->buildRam();
	}
};



#endif //TEST_DIRECTOR_H
