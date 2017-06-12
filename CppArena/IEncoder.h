#pragma once

#include <string>

class IEncoder
{
public:
	virtual std::string Encode(const std::string&) const = 0;
};