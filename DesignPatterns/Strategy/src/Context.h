#pragma once
#include "Strategy.h"

class Context
{
public:
	Context();
	virtual ~Context();

	void Algorithm();
	void SetStrategy(Strategy* strategy);
private:
	Strategy* m_Strategy;
};

