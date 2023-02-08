#include "Adaptee.h"
#include <iostream>

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{
	std::cout << "This is real Request from adptee" << std::endl;
}