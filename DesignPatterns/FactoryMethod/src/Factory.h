#pragma once
#include "Product.h"
class Factory
{
public:
	Factory() = default;
	virtual ~Factory();

	virtual Product* FactoryMethod();
};

