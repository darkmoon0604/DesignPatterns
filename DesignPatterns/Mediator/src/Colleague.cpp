#include "Colleague.h"

#include <iostream>

Colleague::Colleague() : m_Mediator(nullptr)
{

}

Colleague::~Colleague()
{
	delete m_Mediator;
}

void Colleague::ReceiveMsg(std::string str)
{
	std::cout << "Receive message : " << str << std::endl;
}

void Colleague::SendMsg(int toWho, std::string str)
{

}

void Colleague::SetMediator(Mediator* mediator)
{
	m_Mediator = mediator;
}
