#pragma once
#include "Factory.h"
#include "Product.h"

class ConcreteFactory : public Factory
{
public:
	ConcreteFactory();
	virtual ~ConcreteFactory();

	virtual Product* FactoryMethod();
};

