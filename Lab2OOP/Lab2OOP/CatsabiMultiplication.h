#pragma once
#include <string>

class CatsabiMultiplication {
private:
	std::string* firstNumber;
	std::string* secondNumber;
	int separetor;
public:
	CatsabiMultiplication(std::string* firstNumber, std::string* secondNumber);
	void findSeparetor();
};