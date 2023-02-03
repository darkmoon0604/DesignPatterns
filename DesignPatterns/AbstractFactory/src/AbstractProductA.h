#pragma once
class AbstractProductA
{
public:
	AbstractProductA() = default;
	virtual ~AbstractProductA();

	virtual void Use() = 0;
};

