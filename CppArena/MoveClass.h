#pragma once

#include <string>
#include <memory>

class MoveClass
{
public:
	MoveClass();
	MoveClass(MoveClass&& rhs) = default;
	~MoveClass();

private:
	int x;
	std::string y;
	std::unique_ptr<std::string> z;
	std::shared_ptr<std::string> t;
};

