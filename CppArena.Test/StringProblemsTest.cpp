#include "stdafx.h"

#include "gtest/gtest.h"

#include "../CppArena/StringProblems.cpp"

using namespace Beginner;

namespace CppArena
{
	TEST(IsAnagram, EqualStrings)
	{
		// Arrange
		auto s1 = "abc";
		auto s2 = "abc";

		// Act
		auto isAnagram = ::isAnagram(s1, s2);

		// Assert
		//Assert::IsTrue(isAnagram);
	}
}