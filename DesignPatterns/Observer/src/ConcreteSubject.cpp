#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
	SetState(0);
}

ConcreteSubject::~ConcreteSubject()
{

}

int ConcreteSubject::GetState()
{
	return m_State;
}

void ConcreteSubject::SetState(int i)
{
	m_State = i;
}
