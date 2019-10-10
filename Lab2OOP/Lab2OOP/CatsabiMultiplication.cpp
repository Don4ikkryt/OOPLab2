#include "CatsabiMultiplication.h"
#include <cmath>
#include <string>
using namespace std;
void CatsabiMultiplication::NumberExtension(string &FirstNumber, string &SecondNumber) {
	int MaxLenght = FirstNumber.length() > SecondNumber.length() ? FirstNumber.length() : SecondNumber.length();
	string &temp = FirstNumber.length() > SecondNumber.length() ? SecondNumber : FirstNumber;
	for (int i = temp.length(); i < MaxLenght; i++) {

		temp = "0" + temp;
	}

}
vector<LongNumber> CatsabiMultiplication::DivedeIntoTwoParts(string &FirstNumber, string &SecondNumber) {
	NumberExtension(FirstNumber, SecondNumber);
	int separotor = int(FirstNumber.length() / 2);
	vector<LongNumber> DivededParts;
	LongNumber temp1, temp2, temp3, temp4;
	DivededParts.push_back(temp1);
	DivededParts.push_back(temp2);
	DivededParts.push_back(temp3);
	DivededParts.push_back(temp4);

	DivededParts[0].SetNewNumber( FirstNumber.substr(0, separotor));
	DivededParts[1].SetNewNumber(FirstNumber.substr(separotor, FirstNumber.length() -1));
	DivededParts[2].SetNewNumber(SecondNumber.substr(0, separotor));
	DivededParts[3].SetNewNumber(SecondNumber.substr(separotor, SecondNumber.length() - 1));
	return DivededParts;
}
LongNumber CatsabiMultiplication::Multiplication(LongNumber FirstNumber, LongNumber SecondNumber) {
	string Number1 = FirstNumber.GetNumber(), Number2 = SecondNumber.GetNumber();
	if (Number1.length() <= 4 && Number2.length()<=4) {
		return FirstNumber * SecondNumber;
	}
	vector<LongNumber> DivededParts = { DivedeIntoTwoParts(Number1, Number2) };
	LongNumber a = Multiplication(DivededParts[0], DivededParts[2]);
	LongNumber c = Multiplication(DivededParts[1], DivededParts[3]);
	LongNumber sum1 = DivededParts[0] + DivededParts[1];
	LongNumber sum2 = DivededParts[2] + DivededParts[3];
	LongNumber b = Multiplication(sum1, sum2) - a - c;
	a = AddZero(a, 2*DivededParts[1].GetNumber().length());
	b = AddZero(b, DivededParts[3].GetNumber().length());

	return a + b + c;
}
LongNumber CatsabiMultiplication::AddZero(LongNumber Number, int AmountOfZeroes) {
	if (AmountOfZeroes <= 0) {
		return Number;
	}
	else{
		string temp = Number.GetNumber();
		for (int i = 0; i < AmountOfZeroes; i++) {
			temp += "0";
		}
		return LongNumber(temp);
	}
}