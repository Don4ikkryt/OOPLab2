#pragma once
#include <vector>
#include <string>
#include "LongNumber.h"

class SchonhageStrassen {
private:
	std::vector<int> FromLongNumberToVector(LongNumber Number);
	std::string FromVectorToString(std::vector<int>& Coefficients);
	void Normalize(std::vector<int>& Coefficients);
public:
	LongNumber Multiplication(LongNumber Number1, LongNumber Number2);
			   	
};

