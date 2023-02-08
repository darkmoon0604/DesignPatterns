#include "Target.h"
#include <iostream>

Target::~Target()
{

}

void Target::Request()
{
	std::cout << "This is original request" << std::endl;
}