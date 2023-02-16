#pragma once
#include "Colleague.h"

class ConcreteColleagueB : public Colleague
{
public:
	ConcreteColleagueB();
	virtual ~ConcreteColleagueB();

	virtual void ReceiveMsg(std::string str);
	virtual void SendMsg(int toWho, std::string str);
};

