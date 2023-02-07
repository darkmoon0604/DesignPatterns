#pragma once
#include <iostream>

class Product
{
public:
	Product() = default;
	virtual ~Product();

	void SetA(const std::string str);
	void SetB(const std::string str);
	void SetC(const std::string str);
	void Show();
private:
	std::string m_A;
	std::string m_B;
	std::string m_C;
};

