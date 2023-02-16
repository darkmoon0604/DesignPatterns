#pragma once
#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	virtual void Algorithm();
};

