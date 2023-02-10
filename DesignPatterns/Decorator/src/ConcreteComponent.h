#pragma once
#include "Component.h"

class ConcreteComponent : public Component
{
public:
	ConcreteComponent() = default;
	virtual ~ConcreteComponent();

	void Operation();
};

