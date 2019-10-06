#pragma once
#include <string>
#include "LongNumber.h"
#include <vector>

class CatsabiMultiplication {
private:


public:
	void NumberExtension(std::string &FirstNumber, std::string &SecondNumber);

	std::vector<LongNumber> DivedeIntoTwoParts(std::string &FirstNumber, std::string &SecondNumber);

	LongNumber* Multiplication(LongNumber FirstNumber, LongNumber SecondNumber);
};