#include "Strategy.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Context.h"

#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
	Strategy* sA = new ConcreteStrategyA();
	Context* context = new Context();
	context->SetStrategy(sA);
	context->Algorithm();

	Strategy* sB = new ConcreteStrategyB();
	context->SetStrategy(sB);
	context->Algorithm();

	delete sA;
	delete sB;

	return 0;
}