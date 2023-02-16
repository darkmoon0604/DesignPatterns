#pragma once
#include "Colleague.h"

class ConcreteColleagueA : public Colleague
{
public:
	ConcreteColleagueA();
	virtual ~ConcreteColleagueA();

	virtual void ReceiveMsg(std::string str);
	virtual void SendMsg(int toWho, std::string str);
};

