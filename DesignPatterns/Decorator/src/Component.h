#pragma once
class Component
{
public:
	Component() = default;
	virtual ~Component();

	virtual void Operation();
};

