#include "ConcreteImplementorA.h"
#include <iostream>

ConcreteImplementorA::~ConcreteImplementorA()
{

}

void ConcreteImplementorA::OperationImp()
{
	std::cout << "Imp in A style" << std::endl;
}