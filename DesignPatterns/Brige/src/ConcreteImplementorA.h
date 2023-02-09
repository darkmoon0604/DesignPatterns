#pragma once
#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{
public:
	ConcreteImplementorA() = default;
	virtual ~ConcreteImplementorA();

	virtual void OperationImp();
};

