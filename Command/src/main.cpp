#include "Invoker.h"
#include "Receiver.h"
#include "Command.h"

int main()
{
	// 真正的执行者
	Reciever *rev = new Reciever();

	// 两个具体命令
	Command *cmd1 = new TakeCommand(rev);
	PayCommand *cmd2 = new PayCommand(rev);

	Invoker inv;

	inv.addCmd(cmd1);
	inv.addCmd(cmd2);
	inv.notify();

	delete cmd1;
	delete cmd2;
	delete rev;

	return 0;
}
