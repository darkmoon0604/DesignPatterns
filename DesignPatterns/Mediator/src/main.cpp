#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

#include <iostream>

int main(int argc, char* argv[])
{
	ConcreteColleagueA* pa = new ConcreteColleagueA();
	ConcreteColleagueB* pb = new ConcreteColleagueB();
	ConcreteMediator* pm = new ConcreteMediator();
	pm->Registered(1, pa);
	pm->Registered(2, pb);

	pa->SendMsg(2, "I am a");
	pb->SendMsg(1, "I am b");

	delete pa, pb, pm;

	return 0;
}