#include "Receiver.h"

#include <iostream>

Receiver::~Receiver()
{

}

void Receiver::Action()
{
	std::cout << "Receiver::Action" << std::endl;
}