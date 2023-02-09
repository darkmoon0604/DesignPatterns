#pragma once
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction() = default;
	RefinedAbstraction(Implementor* imp) : Abstraction(imp)
	{

	}
	virtual ~RefinedAbstraction();

	virtual void Operation();
};

