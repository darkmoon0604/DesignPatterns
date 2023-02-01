#pragma once
#include "Product.h"
class Factory
{
public:
	Factory();
	virtual ~Factory();

	virtual Product* FactoryMethod();
};

