#include "Director.h"
#include "ConcreteBuilder.h"

#include <string>
using std::cout;
using std::endl;

int main () {
	Director *pDirector = new Director();
	ThinkPadBuilder *pThinkPadBuilder = new ThinkPadBuilder();
	YogaBuilder *pYogaBuilder = new YogaBuilder();

	// assemble Thindpad and Yoga
	// 子类指针转化为父类指针
	pDirector->Create(pThinkPadBuilder);
	pDirector->Create(pYogaBuilder);

	// get the builded computer
	Computer *pThinkPadComputer = pThinkPadBuilder->getResult();
	Computer *pYogaComputer = pYogaBuilder->getResult();

	// test information
	cout << "-----ThinkPad-----" << endl;
	cout << "CPU: " << pThinkPadComputer->getCpu() << endl;
	cout << "Main board: " << pThinkPadComputer->getMainBoard() << endl;
	cout << "Ram: " << pThinkPadComputer->getRam() << endl;


	cout << "-----Yoga-----" << endl;
	cout << "CPU: " << pYogaComputer->getCpu() << endl;
	cout << "Main board: " << pYogaComputer->getMainBoard() << endl;
	cout << "Ram: " << pYogaComputer->getRam() << endl;

	delete(pDirector);
	delete(pThinkPadBuilder);
	delete(pYogaBuilder);
	delete(pThinkPadComputer);
	delete(pYogaComputer);
}