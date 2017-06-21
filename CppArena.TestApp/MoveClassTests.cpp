#include "gtest/gtest.h"

#include "../CppArena/MoveClass.h"

TEST(MoveClass, MoveTwice)
{
	// Arrange
	MoveClass moveClass;

	// Act
	// Move twice
	auto m1 = std::move(moveClass);
	auto m2 = std::move(moveClass);
	// Assert
}