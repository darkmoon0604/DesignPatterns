#include "ConcreteObeserver.h"
#include "Subject.h"

#include <iostream>

ConcreteObeserver::ConcreteObeserver(std::string name) : m_Name(name)
{
	m_ObeserverState = 0;
}

ConcreteObeserver::~ConcreteObeserver()
{

}

void ConcreteObeserver::Update(Subject* sub)
{
	m_ObeserverState = sub->GetState();
	std::cout << "Update obeserver [ " << m_Name << " ] state" << std::endl;
}
