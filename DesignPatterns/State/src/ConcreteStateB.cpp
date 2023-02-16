#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"

#include <iostream>

State* ConcreteStateB::m_State = nullptr;
ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::Handle(Context* c)
{
	std::cout << "Doing something in state b.\nDone, change state to a." << std::endl;
	c->ChangeState(ConcreteStateB::Instance());
}

State* ConcreteStateB::Instance()
{
	if (m_State == nullptr)
	{
		m_State = new ConcreteStateB();
	}
	return m_State;
}

ConcreteStateB::ConcreteStateB()
{

}
