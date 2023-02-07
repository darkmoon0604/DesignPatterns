#pragma once
#include "Builder.h"

class Director
{
public:
	Director() = default;
	virtual ~Director();

	Product* Constuct();
	void SetBuilder(Builder* builder);
public:
	Builder* m_Builder;
private:
	Builder* m_PBuilder;
};

