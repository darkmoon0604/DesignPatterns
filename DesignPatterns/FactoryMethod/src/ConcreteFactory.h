#pragma once
#include "Factory.h"
#include "Product.h"

class ConcreteFactory : public Factory
{
public:
	ConcreteFactory() = default;
	virtual ~ConcreteFactory();

	virtual Product* FactoryMethod();
};

