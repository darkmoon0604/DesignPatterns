#include "Abstraction.h"

Abstraction::~Abstraction()
{
	delete m_Imp;
}

void Abstraction::Operation()
{

}