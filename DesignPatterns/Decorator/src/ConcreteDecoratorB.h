#pragma once
#include "Component.h"
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(Component* com) : Decorator(com)
	{

	}

	virtual ~ConcreteDecoratorB();

	void AddBehavior();

	virtual void Operation();
};

