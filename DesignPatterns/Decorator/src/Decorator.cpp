#include "Decorator.h"

Decorator::~Decorator()
{
	
}

void Decorator::Operation()
{
	m_Component->Operation();
}