#pragma once
class Target
{
public:
	Target() = default;
	virtual ~Target();

	virtual void Request();
};

