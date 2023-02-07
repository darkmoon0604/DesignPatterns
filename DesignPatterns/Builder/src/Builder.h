#pragma once
#include "Product.h"

class Builder
{
public:
	Builder();
	virtual ~Builder();

	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual void BuildPartC();

	virtual Product* GetResult();
protected:
	Product* m_Product;
};

