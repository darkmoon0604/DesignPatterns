#pragma once
class AbstractProductB
{
public:
	AbstractProductB() = default;
	virtual ~AbstractProductB();

	virtual void Eat() = 0;
};

