#include "Subject.h"

Subject::~Subject()
{

}

void Subject::Attach(Obeserver* obeserver)
{
	m_Obeservers.push_back(obeserver);
}

void Subject::Detach(Obeserver* obeserver)
{
	for (auto it = m_Obeservers.begin(); it != m_Obeservers.end(); it++)
	{
		if (*it == obeserver)
		{
			m_Obeservers.erase(it);
			break;
		}
	}
}

void Subject::Notify()
{
	for (auto it = m_Obeservers.begin(); it != m_Obeservers.end(); it++)
	{
		(*it)->Update(this);
	}
}
