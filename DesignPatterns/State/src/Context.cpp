#include "Context.h"
#include "ConcreteStateA.h"

Context::Context()
{
	m_State = ConcreteStateA::Instance();
}

Context::~Context()
{

}

void Context::ChangeState(State* state)
{
	m_State = state;
}

void Context::Request()
{
	m_State->Handle(this);
}
