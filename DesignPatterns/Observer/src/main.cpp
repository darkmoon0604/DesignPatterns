#include "Subject.h"
#include "Obeserver.h"
#include "ConcreteSubject.h"
#include "ConcreteObeserver.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Obeserver* osA = new ConcreteObeserver("A");
	Obeserver* osB = new ConcreteObeserver("B");
	sub->Attach(osA);
	sub->Attach(osB);

	sub->SetState(1);
	sub->Notify();

	std::cout << "------------------------" << std::endl;

	sub->Detach(osB);
	sub->SetState(2);
	sub->Notify();

	delete sub;
	delete osA;
	delete osB;

	return 0;
}