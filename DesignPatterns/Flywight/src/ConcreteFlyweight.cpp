#include "ConcreteFlyweight.h"

#include <iostream>

ConcreteFlyweight::~ConcreteFlyweight()
{

}

void ConcreteFlyweight::Operation()
{
	std::cout << "Flyweight <" << m_IntrinsicState << "> do operation." << std::endl;
}