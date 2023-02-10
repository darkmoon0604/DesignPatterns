#include "Component.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

#include <iostream>

int main(int argc, char* argv[])
{
	ConcreteComponent* pCcom = new ConcreteComponent();
	Component* pA = new ConcreteDecoratorA(pCcom);
	pA->Operation();

	Component* pB = new ConcreteDecoratorB(pCcom);
	pB->Operation();

	delete pCcom;
	delete pA;
	delete pB;

	return 0;
}