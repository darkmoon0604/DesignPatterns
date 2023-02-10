#include "ConcreteDecoratorA.h"
#include <iostream>

ConcreteDecoratorA::~ConcreteDecoratorA()
{

}

void ConcreteDecoratorA::AddBehavior()
{
	std::cout << "Add behavior AAA" << std::endl;
}

void ConcreteDecoratorA::Operation()
{
	Decorator::Operation();
	AddBehavior();
}