

#ifndef TEST_PROTOTYPE_H
#define TEST_PROTOTYPE_H

class Monkey {
public:
	Monkey() = default;
	virtual ~Monkey() = default;
	virtual Monkey* clone() = 0;	// use to clone monkey
	virtual void play() = 0;	// play
};


#endif //TEST_PROTOTYPE_H
