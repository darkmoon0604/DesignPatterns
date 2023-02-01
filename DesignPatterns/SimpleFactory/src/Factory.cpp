#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}

Product* Factory::CreateProduct(const std::string proName)
{
	if ("A" == proName)
	{
		return new ConcreteProductA();
	}
	else if("B" == proName)
	{
		return new ConcreteProductB();
	}

	return nullptr;
}