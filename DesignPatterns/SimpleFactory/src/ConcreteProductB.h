#pragma once
#include "Product.h"

class ConcreteProductB : public Product
{
public:
	ConcreteProductB() = default;
	virtual ~ConcreteProductB();

	virtual void Use();
};

