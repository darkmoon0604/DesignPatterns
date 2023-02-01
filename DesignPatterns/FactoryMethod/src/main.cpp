// ******************* //
// 工厂方法模式		   //
// ******************* //
#include "Factory.h"
#include "Product.h"
#include "ConcreteFactory.h"

#include <iostream>

int main(int argc, char* argv[])
{
	auto fc = new ConcreteFactory();
	auto product = fc->FactoryMethod();
	product->Use();
	delete fc;
	delete product;

	return 0;
}