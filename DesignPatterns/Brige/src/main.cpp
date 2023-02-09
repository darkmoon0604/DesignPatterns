#include "Implementor.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"
#include "Abstraction.h"

#include <iostream>

int main(int argv, char* argc[])
{
	Implementor* pImpA = new ConcreteImplementorA();
	Abstraction* pa = new RefinedAbstraction(pImpA);
	pa->Operation();

	Implementor* pImpB = new ConcreteImplementorB();
	Abstraction* pb = new RefinedAbstraction(pImpB);
	pb->Operation();

	delete pa;
	delete pb;

	return 0;
}