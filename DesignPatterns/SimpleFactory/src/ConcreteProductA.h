#pragma once
#include "Product.h"

class ConcreteProductA : public Product
{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();

	virtual void Use();
};

