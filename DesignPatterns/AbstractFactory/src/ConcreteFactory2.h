#pragma once
#include "AbstractFactory.h"

class ConcreteFactory2 : AbstractFactory
{
public:
	ConcreteFactory2() = default;
	virtual ~ConcreteFactory2();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

