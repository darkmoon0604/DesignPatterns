#pragma once
class Adaptee
{
public:
	Adaptee() = default;
	virtual ~Adaptee();

	void SpecificRequest();
};

