#include "Adapter.h"

Adapter::~Adapter()
{

}

void Adapter::Request()
{
	m_pAdaptee->SpecificRequest();
}