#include "ConcreteImplementorB.h"
#include <iostream>

ConcreteImplementorB::~ConcreteImplementorB()
{

}

void ConcreteImplementorB::OperationImp()
{
	std::cout << "Imp in B style" << std::endl;
}