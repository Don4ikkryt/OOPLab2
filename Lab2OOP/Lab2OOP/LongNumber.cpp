#include "LongNumber.h"

using namespace std;


void LongNumber::SetNewNumber(std::string StringNumber) {
	delete longNumber;
	longNumber = new string[StringNumber.length];
	this->FromStringToArrString(StringNumber);
}
LongNumber::LongNumber(std::string StringNumber) {
	longNumber = new string[StringNumber.length];
	this->FromStringToArrString(StringNumber);
}
void LongNumber::FromStringToArrString(std::string StringNumber) {
	for (size_t i = 0; i < StringNumber.length; i++)
	{
		longNumber[i] = StringNumber[i];
	}
}
string* LongNumber::GetNumber() {
	return longNumber;
}