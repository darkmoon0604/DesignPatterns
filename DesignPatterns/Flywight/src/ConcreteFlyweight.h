#pragma once
#include "Flyweight.h"

#include <string>

class ConcreteFlyweight : public Flyweight
{
public:
	ConcreteFlyweight(std::string str) : m_IntrinsicState(str)
	{

	}

	virtual ~ConcreteFlyweight();

	virtual void Operation();
private:
	std::string m_IntrinsicState;
};

