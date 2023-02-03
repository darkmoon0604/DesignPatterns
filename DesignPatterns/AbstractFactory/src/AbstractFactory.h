#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
	AbstractFactory() = default;
	virtual ~AbstractFactory();

	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
};

