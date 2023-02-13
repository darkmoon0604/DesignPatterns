#pragma once
#include "Flyweight.h"

#include <string>
#include <map>

class FlyweightFactory
{
public:
	FlyweightFactory() = default;
	virtual ~FlyweightFactory();

	Flyweight* GetFlyweightFactory(std::string str);
private:
	std::map<std::string, Flyweight*> m_MapFlyweight;
};

