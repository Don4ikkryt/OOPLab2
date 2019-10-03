#include "LongNumber.h"
#include <string>
using namespace std;

void LongNumber::SetNewNumber(string StringNumber) {
	longNumber = StringNumber;
}
LongNumber::LongNumber(string StringNumber) {
	longNumber = StringNumber;
}
string LongNumber::GetNumber() {
	return longNumber;
}
LongNumber LongNumber::operator+(LongNumber other) {
	string NewNumber = "";
	string FirstNumber = this->longNumber, SecondNumber = other.longNumber;
	
	int MaxLenght;
	if (FirstNumber.length() > SecondNumber.length()) {
		MaxLenght = FirstNumber.length();
		SecondNumber = this->ExtenceLenght(MaxLenght, SecondNumber);
	}
	else {
		MaxLenght = SecondNumber.length();
		FirstNumber = this->ExtenceLenght(MaxLenght, FirstNumber);
	}
	
	int dozen = 0;
	int digit = 0;
	int firstDigit, secondDigit;
	string temp1, temp2;
	for (int i = MaxLenght - 1; i >= 0; i--) {
		temp1 = FirstNumber[i];
		temp2 = SecondNumber[i];
		firstDigit = stoi(temp1);
		secondDigit = stoi(temp2);
		digit = (firstDigit + secondDigit + dozen) % 10;
		dozen = int((firstDigit + secondDigit + dozen) / 10);
		NewNumber = to_string(digit) + NewNumber;
	}
	if (dozen != 0)
	{
		NewNumber = to_string(dozen) + NewNumber;
	}
	return  LongNumber(NewNumber);
}
string LongNumber::ExtenceLenght(int LenghtToExtence, string StringToExtence) {
	string ExtenceString = StringToExtence;
	for (int i = StringToExtence.length(); i < LenghtToExtence; i++) {
		ExtenceString = "0" + ExtenceString;
	}
	return ExtenceString;
}
LongNumber::LongNumber()
{
	longNumber = "0";
}