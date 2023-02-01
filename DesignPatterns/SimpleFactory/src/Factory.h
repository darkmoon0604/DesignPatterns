#pragma once
#include "Product.h"
#include <string>

class Factory
{
public:
	Factory();
	virtual ~Factory();

	static Product* CreateProduct(const std::string proName);
};

