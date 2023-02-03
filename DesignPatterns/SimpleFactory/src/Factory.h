#pragma once
#include "Product.h"
#include <string>

class Factory
{
public:
	Factory() = default;
	virtual ~Factory();

	static Product* CreateProduct(const std::string proName);
};

