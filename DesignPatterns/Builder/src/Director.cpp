#include "Director.h"

Director::~Director()
{

}

Product* Director::Constuct()
{
	m_PBuilder->BuildPartA();
	m_PBuilder->BuildPartB();
	m_PBuilder->BuildPartC();
	return m_PBuilder->GetResult();
}

void Director::SetBuilder(Builder* builder)
{
	m_PBuilder = builder;
}