#pragma once
#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject
{
public:
	Proxy();
	virtual ~Proxy();

	void Request();
private:
	void AfterRequest();
	void PreRequest();
	RealSubject* m_RealSubject;
};

