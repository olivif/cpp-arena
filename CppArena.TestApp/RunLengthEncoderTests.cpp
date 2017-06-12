#include "stdafx.h"

#include "gtest/gtest.h"

#include "../CppArena/RunLengthEncoder.h"

TEST(RunLengthEncoder, Encoding)
{
	// Arrange
	RunLengthEncoder encoder;
	auto rawData = "aaaaaaabcdefff";
	auto expectedEncodedData = "a7b1c1d1e1f3";

	// Act
	auto encodedData = encoder.Encode(rawData);

	// Assert
	EXPECT_EQ(expectedEncodedData, encodedData);
}