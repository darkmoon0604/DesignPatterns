#include "ConcreteDecoratorB.h"
#include <iostream>

ConcreteDecoratorB::~ConcreteDecoratorB()
{

}

void ConcreteDecoratorB::AddBehavior()
{
	std::cout << "Add behavior BBB" << std::endl;
}

void ConcreteDecoratorB::Operation()
{
	Decorator::Operation();
	AddBehavior();
}