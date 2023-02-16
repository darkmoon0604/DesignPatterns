#pragma once
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "Mediator.h"

#include <map>

class ConcreteMediator : public Mediator
{
public:
	ConcreteMediator();
	virtual ~ConcreteMediator();

	virtual void Operation(int who, std::string str);
	virtual void Registered(int who, Colleague* colleague);
private:
	std::map<int, Colleague*> m_Colleagues;
};

