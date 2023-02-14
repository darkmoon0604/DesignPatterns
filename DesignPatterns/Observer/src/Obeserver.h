#pragma once
class Subject;

class Obeserver
{
public:
	Obeserver();
	virtual ~Obeserver();

	virtual void Update(Subject* sub) = 0;
};

