#pragma once
#include <string>
#include "LongNumber.h"

class CatsabiMultiplication {
private:
	LongNumber a, b, c, d;
	
public:
	void NumberExtension(std::string &FirstNumber, std::string &SecondNumber);
	LongNumber Multiplication();
	void DivedeIntoTwoParts();
	
};