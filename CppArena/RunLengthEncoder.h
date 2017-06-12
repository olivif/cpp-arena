#pragma once

#include "IEncoder.h"

// A simple implmentation of a run length encoder
// https://en.wikipedia.org/wiki/Run-length_encoding
class RunLengthEncoder : public IEncoder
{
public:
	RunLengthEncoder();

	// Inherited via IEncoder
	virtual std::string Encode(const std::string&) const override;
};

