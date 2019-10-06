#pragma once
#include <string>
class LongNumber{

private:
	
	std::string longNumber;
	std::string ExtenceLenght(int LenghtToExtence, std::string StringToExtence);
	std::string Differnce(std::string FirstNumber, std::string SecondNumber);
public:
	LongNumber();
	LongNumber(std::string StringNumber);
	void SetNewNumber(std::string StringNumber);
	std::string GetNumber();
	LongNumber operator +(LongNumber other);
	LongNumber operator -(LongNumber other);
};