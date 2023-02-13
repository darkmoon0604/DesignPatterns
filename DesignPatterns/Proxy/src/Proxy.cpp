#include "Proxy.h"

#include <iostream>

Proxy::Proxy()
{
	m_RealSubject = new RealSubject();
}

Proxy::~Proxy()
{
	delete m_RealSubject;
}

void Proxy::Request()
{
	PreRequest();
	m_RealSubject->Request();
	AfterRequest();
}

void Proxy::AfterRequest()
{
	std::cout << "Proxy::AfterRequest" << std::endl;
}

void Proxy::PreRequest()
{
	std::cout << "Proxy::PreRequest" << std::endl;
}