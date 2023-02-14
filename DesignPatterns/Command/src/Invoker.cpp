#include "Invoker.h"
#include <iostream>

Invoker::~Invoker()
{
	delete m_Cmd;
}

void Invoker::Call()
{
	std::cout << "Invoker::Call" << std::endl;
	m_Cmd->Execute();
}