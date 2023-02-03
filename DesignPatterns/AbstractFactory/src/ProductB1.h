#pragma once
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
	ProductB1() = default;
	virtual ~ProductB1();

	void Eat();
};

