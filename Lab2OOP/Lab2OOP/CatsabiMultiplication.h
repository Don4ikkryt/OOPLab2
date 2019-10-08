#pragma once
#include <string>
#include "LongNumber.h"
#include <vector>

class CatsabiMultiplication {
private:

	LongNumber AddZero(LongNumber Number, int AmoutOfZeroes);
public:
	void NumberExtension(std::string &FirstNumber, std::string &SecondNumber);

	std::vector<LongNumber> DivedeIntoTwoParts(std::string &FirstNumber, std::string &SecondNumber);

	LongNumber Multiplication(LongNumber FirstNumber, LongNumber SecondNumber);
};