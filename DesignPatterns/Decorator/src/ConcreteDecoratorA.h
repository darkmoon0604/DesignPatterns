#pragma once
#include "Component.h"
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA(Component* com) : Decorator(com)
	{

	}

	virtual ~ConcreteDecoratorA();
	
	void AddBehavior();

	virtual void Operation();
};

