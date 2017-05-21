// CppArena.TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest/gtest.h"

TEST(Test1, EqualStrings)
{
	// Arrange
	auto s1 = "abc";
	auto s2 = "abc";

	// Act
	//auto isAnagram = ::isAnagram(s1, s2);

	// Assert
	//Assert::IsTrue(isAnagram);
	EXPECT_FALSE(false);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}