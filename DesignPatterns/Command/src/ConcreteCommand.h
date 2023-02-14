#pragma once
#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command
{
public:
	ConcreteCommand(Receiver* rec) : m_Receiver(rec)
	{

	}

	virtual ~ConcreteCommand();

	virtual void Execute();
private:
	Receiver* m_Receiver;
};

