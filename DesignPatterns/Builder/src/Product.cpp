#include "Product.h"

Product::~Product()
{

}

void Product::SetA(const std::string str)
{
	m_A = str;
}

void Product::SetB(const std::string str)
{
	m_B = str;
}

void Product::SetC(const std::string str)
{
	m_C = str;
}

void Product::Show()
{
	std::cout << "Product has" << m_A << m_B << m_C << std::endl;
}