#include "Singleton.h"

int main(int argc, char* argv[])
{
	Singleton::GetInstance()->SingletonOperation();
	return 0;
}