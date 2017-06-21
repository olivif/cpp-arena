#include "MoveClass.h"

MoveClass::MoveClass()
	: x(10)
	, y("abc")
	, z(std::make_unique<std::string>("def"))
	, t(std::make_shared<std::string>("ghi"))
{
}

MoveClass::~MoveClass()
{
}
