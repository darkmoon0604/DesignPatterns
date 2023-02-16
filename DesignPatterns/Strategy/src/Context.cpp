#include "Context.h"

Context::Context() : m_Strategy(nullptr)
{

}

Context::~Context()
{

}

void Context::Algorithm()
{
	m_Strategy->Algorithm();
}

void Context::SetStrategy(Strategy* strategy)
{
	m_Strategy = strategy;
}
