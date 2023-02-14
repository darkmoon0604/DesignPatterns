#pragma once
#include "Obeserver.h"
#include <vector>

class Subject
{
public:
	Subject() = default;
	virtual ~Subject();
	Obeserver* m_Obeserver;

	void Attach(Obeserver* obeserver);
	void Detach(Obeserver* obeserver);
	void Notify();

	virtual int GetState() = 0;
	virtual void SetState(int i) = 0;
private:
	std::vector<Obeserver*> m_Obeservers;
};

