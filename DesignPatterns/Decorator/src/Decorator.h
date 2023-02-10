#pragma once
#include "Component.h"

class Decorator : public Component
{
public:
	Decorator(Component* com) : m_Component(com)
	{

	}

	virtual ~Decorator();

	void Operation();

private:
	Component* m_Component;
};

