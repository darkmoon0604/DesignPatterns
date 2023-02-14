#include "Receiver.h"
#include "Invoker.h"
#include "ConcreteCommand.h"

int main(int argc, char* argv[])
{
	Receiver* pRec = new Receiver();
	ConcreteCommand* pCmd = new ConcreteCommand(pRec);
	Invoker* pInvoker = new Invoker(pCmd);
	pInvoker->Call();

	delete pInvoker;

	return 0;
}