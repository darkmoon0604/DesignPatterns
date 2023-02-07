#include "Builder.h"

Builder::Builder()
{
	m_Product = new Product();
}

Builder::~Builder()
{
	delete m_Product;
}

void Builder::BuildPartA()
{

}

void Builder::BuildPartB()
{

}


void Builder::BuildPartC()
{

}

Product* Builder::GetResult()
{
	return m_Product;
}