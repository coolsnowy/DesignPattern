
#ifndef TEST_CONCRETEBUILDER_H
#define TEST_CONCRETEBUILDER_H

#include "Builder.h"

// ThinkPad
class ThinkPadBuilder : public Builder {
public:
	ThinkPadBuilder() {
		pComputer = new Computer();
	}
	void buildCpu() {
		pComputer->setCpu("i5-6200");
	}

	void buildMainBoard() {
		pComputer->setMainBoard("Intel");
	}

	void buildRam() {
		pComputer->setRam("DDR4");
	}

	Computer* getResult() {
		return pComputer;
	}
private:
	Computer *pComputer;
};

// Yoga
class YogaBuilder : public Builder {
public:
	YogaBuilder() {
		pComputer = new Computer();
	}
	void buildCpu() {
		pComputer->setCpu("i7-6700");
	}

	void buildMainBoard() {
		pComputer->setMainBoard("AMD");
	}

	void buildRam() {
		pComputer->setRam("DDR5");
	}

	Computer* getResult() {
		return pComputer;
	}
private:
	Computer *pComputer;
};

#endif //TEST_CONCRETEBUILDER_H
