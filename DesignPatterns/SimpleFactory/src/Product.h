#pragma once
class Product
{
public:
	Product() = default;
	virtual ~Product();

	virtual void Use() = 0;
};

