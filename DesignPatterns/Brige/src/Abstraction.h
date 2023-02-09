#pragma once
#include "Implementor.h"

class Abstraction
{
public:
	Abstraction() = default;
	virtual ~Abstraction();

	Abstraction(Implementor* imp) : m_Imp(imp)
	{

	}
	virtual void Operation();
protected:
	Implementor* m_Imp;
};

