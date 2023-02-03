#include "ConcreteProduct.h"
#include <iostream>

ConcreteProduct::~ConcreteProduct()
{

}

void ConcreteProduct::Use()
{
	std::cout << "Use Product A" << std::endl;
}
