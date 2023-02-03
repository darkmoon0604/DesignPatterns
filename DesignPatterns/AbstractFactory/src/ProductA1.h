#pragma once
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
	ProductA1() = default;
	virtual ~ProductA1();

	void Use();
};

