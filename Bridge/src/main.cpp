#include "RefinedAbstraction.h"
#include "ConcreteImplementor.h"

#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main () {

	// create Euqipment
	ElectricalEquipment *light = new Light();
	ElectricalEquipment *fan = new Fan();

	// create Switch for a specific equipment
	Switch *pullChain = new PullChainSwitch(light);
	Switch *push = new PushSwitch(fan);

	pullChain->on();
	pullChain->off();

	push->on();
	push->off();

	delete(light);
	delete(fan);
	delete(pullChain);
	delete(push);
	return 0;

}