#pragma once
#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
	UnsharedConcreteFlyweight() = default;
	virtual ~UnsharedConcreteFlyweight();

	void Operation();
private:
	int m_AllState;
};

