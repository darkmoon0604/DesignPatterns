#include "ConcreteCommand.h"
#include <iostream>

ConcreteCommand::~ConcreteCommand()
{
	delete m_Receiver;
}

void ConcreteCommand::Execute()
{
	std::cout << "ConcreteCommand::Execute" << std::endl;
	m_Receiver->Action();
}