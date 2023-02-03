#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main(int argc, char* argv[])
{
	auto fc1 = new ConcreteFactory1();
	auto pa1 = fc1->CreateProductA();
	auto pb1 = fc1->CreateProductB();
	pa1->Use();
	pb1->Eat();

	auto fc2 = new ConcreteFactory2();
	auto pa2 = fc2->CreateProductA();
	auto pb2 = fc2->CreateProductB();
	pa2->Use();
	pb2->Eat();

	return 0;
}