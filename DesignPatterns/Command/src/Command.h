#pragma once
class Command
{
public:
	Command() = default;
	virtual ~Command();

	virtual void Execute();
};

