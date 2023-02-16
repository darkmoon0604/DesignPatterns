#include "ConcreteColleagueB.h"

#include <iostream>

ConcreteColleagueB::ConcreteColleagueB()
{

}

ConcreteColleagueB::~ConcreteColleagueB()
{

}

void ConcreteColleagueB::ReceiveMsg(std::string str)
{
	std::cout << "ConcreteColleagueB receive message : " << str << std::endl;
}

void ConcreteColleagueB::SendMsg(int toWho, std::string str)
{
	std::cout << "Send message form ConcreteColleagueB to : " << toWho << std::endl;
	m_Mediator->Operation(toWho, str);
}
