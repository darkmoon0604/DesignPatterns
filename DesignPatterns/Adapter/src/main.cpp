#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

int main(int argv, char* argc[])
{
	Adaptee* ate = new Adaptee();
	Target* tar = new Adapter(ate);
	tar->Request();

	delete ate;
	delete tar;

	return 0;
}