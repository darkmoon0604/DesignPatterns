#pragma once
class Context;

class State
{
public:
	State();
	virtual ~State();

	virtual void Handle(Context* c);
};

