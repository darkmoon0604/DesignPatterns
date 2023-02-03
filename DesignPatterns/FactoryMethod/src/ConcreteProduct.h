#pragma once
#include "Factory.h"
#include "Product.h"

class ConcreteProduct : public Product
{
public:
	ConcreteProduct() = default;
	virtual ~ConcreteProduct();

	virtual void Use();
};

