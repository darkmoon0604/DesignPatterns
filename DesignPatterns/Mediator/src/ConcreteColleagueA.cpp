#include "ConcreteColleagueA.h"

#include <iostream>

ConcreteColleagueA::ConcreteColleagueA()
{

}

ConcreteColleagueA::~ConcreteColleagueA()
{
	
}

void ConcreteColleagueA::ReceiveMsg(std::string str)
{
	std::cout << "ConcreteColleagueA receive message : " << str << std::endl;
}

void ConcreteColleagueA::SendMsg(int toWho, std::string str)
{
	std::cout << "Send message form ConcreteColleagueA to : " << toWho << std::endl;
	m_Mediator->Operation(toWho, str);
}
