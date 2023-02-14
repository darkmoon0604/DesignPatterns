#pragma once
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject();
	virtual ~ConcreteSubject();

	virtual int GetState();
	virtual void SetState(int i);
private:
	int m_State;
};

