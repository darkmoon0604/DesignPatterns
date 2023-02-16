#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"

#include <iostream>

State* ConcreteStateA::m_State = nullptr;

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::Handle(Context* c)
{
	std::cout << "Doing something in state a.\nDone, change state to b." << std::endl;
	c->ChangeState(ConcreteStateB::Instance());
}

State* ConcreteStateA::Instance()
{
	if (m_State == nullptr)
	{
		m_State = new ConcreteStateA();
	}
	return m_State;
}

ConcreteStateA::ConcreteStateA()
{

}
