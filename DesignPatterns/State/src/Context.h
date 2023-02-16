#pragma once
#include "State.h"

class Context
{
public: 
	Context();
	virtual ~Context();

	void ChangeState(State* state);
	void Request();
private:
	State* m_State;
};

