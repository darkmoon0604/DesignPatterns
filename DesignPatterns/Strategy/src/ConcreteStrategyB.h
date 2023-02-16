#pragma once
#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	virtual void Algorithm();
};

