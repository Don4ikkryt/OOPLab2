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
LongNumber LongNumber::operator-(LongNumber other) {
	string FirstNumber = this->GetNumber();
	string SecondNumber = other.GetNumber();
	int MaxLenght;
	if (FirstNumber.length() > SecondNumber.length()) {
	    MaxLenght = FirstNumber.length();
		SecondNumber = this->ExtenceLenght(MaxLenght, SecondNumber);
	}
	else {
		MaxLenght = SecondNumber.length();
		FirstNumber = this->ExtenceLenght(MaxLenght, FirstNumber);
	}
	int flag = 0;
	string temp1, temp2;
	int temp11, temp22;
	for (int i = 0; i < MaxLenght; i++) {
		temp1 = FirstNumber[i];
		temp2 = SecondNumber[i];
		temp11 = stoi(temp1);
		temp22 = stoi(temp2);
		if (temp11 != temp22)
		{
			if (temp11 > temp22)
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 2;
				break;
			}
		}

	}
	LongNumber Returning;
	string NewNumber;
	switch (flag)
	{
	case 0 :
		Returning.SetNewNumber("0");
		return Returning;
	case 1 :
		NewNumber = Differnce(FirstNumber, SecondNumber);
		Returning.SetNewNumber(NewNumber);
		return Returning;
	case 2:
		NewNumber = Differnce(SecondNumber, FirstNumber);
		NewNumber = "-" + NewNumber;
		Returning.SetNewNumber(NewNumber);
		return Returning;
	default:
		return Returning;
	}
}
string LongNumber::Differnce(string BiggerNumber, string LessNumber) {
	string temp1, temp2;
	int temp11, temp22;
	string NewNumber = "";
	int NewDigit;
	for (int i = BiggerNumber.length()-1; i >= 0; i--) {
		temp1 = BiggerNumber[i];
		temp2 = LessNumber[i];
		temp11 = stoi(temp1);
		temp22 = stoi(temp2);
		if (temp11 == temp22) {
			NewDigit = 0;
			
		}
		if (temp11 > temp22) {
			NewDigit = temp11 - temp22;
			
		}
		if (temp11 < temp22)
		{
			int  tempNextDigit;
			string  NewNextDigit;
			NewDigit = temp11 + 10 - temp22;
			int iter = 0;
				NewNextDigit = BiggerNumber[i-1];
				tempNextDigit = stoi(NewNextDigit);
				if (tempNextDigit == 0) {
					
					while (tempNextDigit == 0) {
						BiggerNumber.erase(i - iter, 1);
						BiggerNumber.insert(i - iter, "9");
						iter++;
						NewNextDigit = BiggerNumber[i - iter];
						tempNextDigit = stoi(NewNextDigit);
						
					}
					tempNextDigit = tempNextDigit - 1;
					BiggerNumber.erase(i - iter, 1);
					BiggerNumber.insert(i - iter, to_string(tempNextDigit));
				}
				else {
					tempNextDigit = tempNextDigit - 1;
					BiggerNumber.erase(i - iter - 1, 1);
					BiggerNumber.insert(i - iter - 1, to_string(tempNextDigit));
				}
		}
		NewNumber = to_string(NewDigit) + NewNumber;
	}
	return NewNumber;
}
LongNumber LongNumber::operator*(LongNumber other) {
	if (this->GetNumber().length() < 5 && other.GetNumber().length()< 5) {
		string FirstNumber = this->GetNumber();
		string SecondNumber = other.GetNumber();
		int Num1 = stoi(FirstNumber);
		int Num2 = stoi(SecondNumber);
		int Subtraction = Num1 * Num2;
		return LongNumber(to_string(Subtraction));
	}
	else
	{
		return LongNumber();
	}
}