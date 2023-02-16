#include "ConcreteMediator.h"

#include <map>
#include <iostream>

ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::Operation(int who, std::string str)
{
	std::map<int, Colleague*>::iterator it = m_Colleagues.find(who);
	if (it == m_Colleagues.end())
	{
		std::cout << "not found this colleague." << std::endl;
		return;
	}

	Colleague* c = it->second;
	c->ReceiveMsg(str);
}

void ConcreteMediator::Registered(int who, Colleague* colleague)
{
	std::map<int, Colleague*>::const_iterator it = m_Colleagues.find(who);
	if (it == m_Colleagues.end())
	{
		m_Colleagues.insert(std::make_pair(who, colleague));
		colleague->SetMediator(this);
	}
}
