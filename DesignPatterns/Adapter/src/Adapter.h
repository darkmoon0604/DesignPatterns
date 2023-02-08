#pragma once
#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
public:
	Adapter(Adaptee* adaptee) : m_pAdaptee(adaptee)
	{

	}
	virtual ~Adapter();

	virtual void Request();
private:
	Adaptee* m_pAdaptee;
};

