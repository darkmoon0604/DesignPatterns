#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{

}

Singleton::~Singleton()
{
	delete instance;
}

Singleton* Singleton::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Singleton();
	}
	return instance;
}

void Singleton::SingletonOperation()
{
	std::cout << "Singleton Operation" << std::endl;
}