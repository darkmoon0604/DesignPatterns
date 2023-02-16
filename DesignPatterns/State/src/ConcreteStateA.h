#pragma once
#include "State.h"

class ConcreteStateA : public State
{
public:
	virtual ~ConcreteStateA();

	virtual void Handle(Context* c);
public:
	static State* Instance();
private:
	ConcreteStateA();
	static State* m_State;
};

