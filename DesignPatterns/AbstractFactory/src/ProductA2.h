#pragma once
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA
{
public:
	ProductA2() = default;
	virtual ~ProductA2();

	void Use();
};

