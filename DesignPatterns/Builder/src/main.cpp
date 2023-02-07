#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"

int main(int argc, char* argv[])
{
	ConcreteBuilder* cBuilder = new ConcreteBuilder();
	Director director;
	director.SetBuilder(cBuilder);
	Product* product = director.Constuct();
	product->Show();

	delete cBuilder;
	delete product;

	return 0;
}