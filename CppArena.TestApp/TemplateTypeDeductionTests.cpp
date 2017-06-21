#include "gtest/gtest.h"

#include "../CppArena/TemplateTypeDeduction.h"

TEST(TemplateTypeDeduction, DoSomething)
{
	// DoSomething uses pass by value, so 
	// T = int
	// expr = int
	{
		int x = 10;
		DoSomething(x);
	}

	{
		const int x = 10;
		DoSomething(x);
	}

	{
		int xValue = 10;
		int& x = xValue;
		DoSomething(x);
	}

	{
		int xValue = 10;
		const int& x = xValue;
		DoSomething(x);
	}

	{
		int xValue = 10;
		int* x = &xValue;
		DoSomething(x);
	}

	{
		int xValue = 10;
		const int* x = &xValue;
		DoSomething(x);
	}
}

TEST(TemplateTypeDeduction, DoSomethingReference)
{
	// T = 
	// expr = 
	{
		// T = int
		// expr = int&
		int x = 10;
		DoSomethingReference(x);
	}

	{
		// T = const int
		// expr = const int&
		const int x = 10;
		DoSomethingReference(x);
	}

	{
		// T = int
		// expr = int&
		int xValue = 10;
		int& x = xValue;
		DoSomethingReference(x);
	}

	{
		// T = const int
		// expr = const int&
		int xValue = 10;
		const int& x = xValue;
		DoSomethingReference(x);
	}

	{
		// T = int *
		// expr = int *&
		int xValue = 10;
		int* x = &xValue;
		DoSomethingReference(x);
	}

	{
		// T = const int *
		// expr = const int *&
		int xValue = 10;
		const int* x = &xValue;
		DoSomethingReference(x);
	}
}

TEST(TemplateTypeDeduction, DoSomethingUniversalReference)
{
	// T = 
	// expr = 
	{
		// T = int&
		// expr = int&
		int x = 10;
		DoSomethingUniversalReference(x);
	}

	{
		// T = const int&
		// expr = const int&
		const int x = 10;
		DoSomethingUniversalReference(x);
	}

	{
		// T = int&
		// expr = int&
		int xValue = 10;
		int& x = xValue;
		DoSomethingUniversalReference(x);
	}

	{
		// T = const int&
		// expr = const int&
		int xValue = 10;
		const int& x = xValue;
		DoSomethingUniversalReference(x);
	}

	{
		// T = int* &
		// expr = int* &
		int xValue = 10;
		int* x = &xValue;
		DoSomethingUniversalReference(x);
	}

	{
		// T = const int *&
		// expr = const int *&
		int xValue = 10;
		const int* x = &xValue;
		DoSomethingUniversalReference(x);
	}
}

TEST(TemplateTypeDeduction, DoSomethingPointer)
{
	// T = 
	// expr = 
	{
		// doesnt work
		int x = 10;
		// DoSomethingPointer(x);
	}

	{
		// doesnt work
		const int x = 10;
		//DoSomethingPointer(x);
	}

	{
		// doesnt work
		int xValue = 10;
		int& x = xValue;
		//DoSomethingPointer(x);
	}

	{
		// doesnt work
		int xValue = 10;
		const int& x = xValue;
		//DoSomethingPointer(x);
	}

	{
		// T = int
		// expr = int *
		int xValue = 10;
		int* x = &xValue;
		DoSomethingPointer(x);
	}

	{
		// T = const int
		// expr = const int *
		int xValue = 10;
		const int* x = &xValue;
		DoSomethingPointer(x);
	}
}