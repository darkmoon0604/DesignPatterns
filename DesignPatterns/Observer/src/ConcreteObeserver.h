#pragma once
#include "Obeserver.h"
#include <string>

class ConcreteObeserver : public Obeserver
{
public:
	ConcreteObeserver(std::string name);
	virtual ~ConcreteObeserver();
	virtual void Update(Subject* sub);
private:
	std::string m_Name;
	int m_ObeserverState;
};

