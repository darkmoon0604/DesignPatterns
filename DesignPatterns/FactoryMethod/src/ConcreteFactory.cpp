#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

ConcreteFactory::~ConcreteFactory()
{

}

Product* ConcreteFactory::FactoryMethod()
{
	return new ConcreteProduct();
}