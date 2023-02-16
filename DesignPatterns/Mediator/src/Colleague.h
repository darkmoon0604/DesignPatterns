#pragma once
#include "Mediator.h"

#include <string>

class Colleague
{
public:
	Colleague();
	virtual ~Colleague();

	virtual void ReceiveMsg(std::string str);
	virtual void SendMsg(int toWho, std::string str);
	void SetMediator(Mediator *mediator);
protected:
	Mediator* m_Mediator;
};

