#include "Facade.h"

Facade::Facade()
{
	m_SystemA = new SystemA();
	m_SystemB = new SystemB();
	m_SystemC = new SystemC();
}

Facade::~Facade()
{
	delete m_SystemA;
	delete m_SystemB;
	delete m_SystemC;
}

void Facade::WarpOperation()
{
	m_SystemA->OperationA();
	m_SystemB->OperationB();
	m_SystemC->OperationC();
}