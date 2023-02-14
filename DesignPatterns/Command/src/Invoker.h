#pragma once
#include "Command.h"

class Invoker
{
public:
	Invoker(Command* cmd) : m_Cmd(cmd)
	{

	}
	virtual ~Invoker();
	void Call();
private:
	Command* m_Cmd;
};

