#include "stdafx.h"

#include "../CppArena/StringProblems.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Beginner;

namespace CppArena
{
	TEST_CLASS(StringProblemsTest)
	{
	public:

		TEST_METHOD(IsAnagram_EqualStrings)
		{
			// Arrange
			auto s1 = "abc";
			auto s2 = "abc";

			// Act
			auto isAnagram = ::isAnagram(s1, s2);

			// Assert
			Assert::IsTrue(isAnagram);
		}
	};
}