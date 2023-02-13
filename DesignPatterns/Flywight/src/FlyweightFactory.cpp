#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

#include <iostream>

FlyweightFactory::~FlyweightFactory()
{

}

Flyweight* FlyweightFactory::GetFlyweightFactory(std::string str)
{
	std::map<std::string, Flyweight*>::iterator itr = m_MapFlyweight.find(str);
	if (itr == m_MapFlyweight.end())
	{
		Flyweight* fw = new ConcreteFlyweight(str);
		m_MapFlyweight.insert(make_pair(str, fw));
		return fw;
	}
	else
	{
		std::cout << "Aready in the pool, use the exist one." << std::endl;
		return itr->second;
	}
}