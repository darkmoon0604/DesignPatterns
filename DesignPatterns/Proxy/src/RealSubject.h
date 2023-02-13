#pragma once
#include "Subject.h"

class RealSubject : public Subject
{
public:
	RealSubject() = default;
	virtual ~RealSubject();

	void Request();
};

