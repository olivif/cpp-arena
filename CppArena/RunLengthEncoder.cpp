#include <sstream>

#include "RunLengthEncoder.h"

RunLengthEncoder::RunLengthEncoder()
{
}

std::string RunLengthEncoder::Encode(const std::string& data) const
{
	// For every character, check if it's part of a sequence.
	// If it is, collapse it and encode into {char}{sequencelength}
	std::stringstream stream;
	size_t current = 0;
	size_t length = data.length();

	while (current < (length - 1))
	{
		// Loop while we have the same character
		size_t sequenceLength = 1;
		while (current < length - 1 && data[current] == data[current + 1])
		{
			++sequenceLength;
			++current;
		}

		// Add to the encoded string
		stream << data[current] << sequenceLength;

		++current;
	}

	return stream.str();
}
