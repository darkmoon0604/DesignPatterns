#pragma once
#include "Product.h"

class ConcreteProductA : public Product
{
public:
	ConcreteProductA() = default;
	virtual ~ConcreteProductA();

	virtual void Use();
};

