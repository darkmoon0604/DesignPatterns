#pragma once
#include "AbstractFactory.h"

class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1() = default;
	virtual ~ConcreteFactory1();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

