#pragma once
#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade
{
public:
	Facade();
	virtual ~Facade();

	void WarpOperation();
private:
	SystemA* m_SystemA;
	SystemB* m_SystemB;
	SystemC* m_SystemC;
};

