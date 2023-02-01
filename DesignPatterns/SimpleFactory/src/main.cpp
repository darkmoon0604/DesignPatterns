// ******************* //
// 简单工厂模式		   //
// ******************* //
#include "Factory.h"
#include "Product.h"

int main(int argc, char* argv[])
{
	auto proA = Factory::CreateProduct("A");
	proA->Use();
	delete proA;

	return 0;
}