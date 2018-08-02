
#ifndef TEST_BUILDER_H
#define TEST_BUILDER_H

#include "Product.h"
// Builder interface, indicate the manner of assemble
class Builder {
public:
	virtual void buildCpu() = 0;
	virtual void buildMainBoard() = 0;
	virtual void buildRam() = 0;

	virtual Computer* getResult() = 0;	// get the completed product
};
#endif //TEST_BUILDER_H
