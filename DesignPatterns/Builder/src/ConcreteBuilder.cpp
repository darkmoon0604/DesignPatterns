#include "ConcreteBuilder.h"

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPartA()
{
	m_Product->SetA("AAA");
}

void ConcreteBuilder::BuildPartB()
{
	m_Product->SetB("BBB");
}

void ConcreteBuilder::BuildPartC()
{
	m_Product->SetC("CCC");
}