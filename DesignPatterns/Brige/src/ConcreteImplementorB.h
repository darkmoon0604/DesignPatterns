#pragma once
#include "Implementor.h"

class ConcreteImplementorB : public Implementor
{
public:
	ConcreteImplementorB() = default;
	virtual ~ConcreteImplementorB();

	virtual void OperationImp();
};

