#pragma once
class Singleton
{
public:
	virtual ~Singleton();
	static Singleton* GetInstance();
	void SingletonOperation();
public:
	Singleton* m_Singleton;
private:
	Singleton();
private:
	static Singleton* instance;
};

