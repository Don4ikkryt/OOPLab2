#pragma once
#include <string>

class LongNumber{

private:

	std::string *longNumber;
public:
	LongNumber(std::string StringNumber);
	void SetNewNumber(std::string StringNumber);
	void FromStringToArrString(std::string StringNumber);
	std::string* GetNumber();
};