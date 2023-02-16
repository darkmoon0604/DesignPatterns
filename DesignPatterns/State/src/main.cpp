#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Context* c = new Context();
	c->Request();
	c->Request();
	c->Request();
	delete c;
	return 0;
}