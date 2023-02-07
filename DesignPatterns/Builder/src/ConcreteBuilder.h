#pragma once
#include "Builder.h"

class ConcreteBuilder : public Builder
{
public:
	ConcreteBuilder() = default;
	virtual ~ConcreteBuilder();

	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual void BuildPartC();
};

