#pragma once
class Subject
{
public:
	Subject() = default;
	virtual ~Subject();

	virtual void Request();
};

