#pragma once
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB
{
public:
	ProductB2() = default;
	virtual ~ProductB2();

	void Eat();
};

