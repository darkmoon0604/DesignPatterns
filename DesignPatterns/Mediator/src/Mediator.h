#pragma once
#include <string>

class Colleague;

class Mediator
{
public:
	Mediator();
	virtual ~Mediator();

	virtual void Operation(int who, std::string str);
	virtual void Registered(int who, Colleague* colleague);
};

