#include "RefinedAbstraction.h"
#include <iostream>

RefinedAbstraction::~RefinedAbstraction()
{

}

void RefinedAbstraction::Operation()
{
	std::cout << "Do something" << std::endl;
	m_Imp->OperationImp();
}