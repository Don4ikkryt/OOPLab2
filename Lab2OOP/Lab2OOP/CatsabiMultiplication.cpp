#include "CatsabiMultiplication.h"
#include "math.h"
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
//LongNumber* CatsabiMultiplication::Multiplication(LongNumber FirstNumber, LongNumber SecondNumber) {
//	string Number1 = FirstNumber.GetNumber(), Number2 = SecondNumber.GetNumber();
//	while (Number1.length() > 4)
//	{
//		vector<LongNumber> DivededParts = { DivedeIntoTwoParts(Number1, Number2) };
//		LongNumber sum1 = DivededParts[0] + DivededParts[1];
//		LongNumber sum2 = DivededParts[2] + DivededParts[3];
//		LongNumber* temp1 = Multiplication(DivededParts[0], DivededParts[3]);
//		LongNumber* temp2 = Multiplication(DivededParts[1], DivededParts[4]);
//		LongNumber* temp3 = Multiplication(sum1, sum2);
//
//	}
//	
//	
//
//}