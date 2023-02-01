#pragma once
#include "Product.h"

class ConcreteProductB : public Product
{
public:
	ConcreteProductB();
	virtual ~ConcreteProductB();

	virtual void Use();
};

