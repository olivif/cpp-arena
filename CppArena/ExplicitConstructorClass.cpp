#include "ExplicitConstructorClass.h"

ExplicitConstructorClass::ExplicitConstructorClass(int value)
{
}

void CreateExplicitConstructorClass()
{
	int x = 1;
	ExplicitConstructorClass c1(x);

	// compiles, but gives warning
	//double y = 1.0;
	//ExplicitConstructorClass c2(y);
}
