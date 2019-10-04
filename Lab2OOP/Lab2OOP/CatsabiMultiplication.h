#pragma once
#include <string>
#include "LongNumber.h"

class CatsabiMultiplication {
private:
	
	int basis = 0;
public:
	void NumberExtension(std::string &FirstNumber, std::string &SecondNumber);
	LongNumber Multiplication();
	void DivedeIntoTwoParts(std::string &FirstNumber, std::string &SecondNumber);
	LongNumber a, b, c, d;
};