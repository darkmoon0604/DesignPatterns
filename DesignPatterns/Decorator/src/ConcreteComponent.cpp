#include "ConcreteComponent.h"
#include <iostream>

ConcreteComponent::~ConcreteComponent()
{

}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent is normal operation" << std::endl;
}