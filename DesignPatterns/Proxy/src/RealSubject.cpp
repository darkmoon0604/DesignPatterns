#include "RealSubject.h"

#include <iostream>

RealSubject::~RealSubject()
{

}

void RealSubject::Request()
{
	std::cout << "RealSubject request." << std::endl;
}