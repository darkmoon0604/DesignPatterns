#pragma once
#include "State.h"

class ConcreteStateB : public State
{
public:
	virtual ~ConcreteStateB();
	virtual void Handle(Context* c);
public:
	static State* Instance();
private:
	ConcreteStateB();
	static State* m_State;
};

