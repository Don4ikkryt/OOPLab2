#include "Schonhage–Strassen.h"
#include "Furie.h"
using namespace std;

vector<int> SchonhageStrassen::FromLongNumberToVector(LongNumber longNumber) {
	vector<int> Cofficients;
	string Number = longNumber.GetNumber();
	string temp;
	int digit;
	for (int i = 0; i < Number.length(); i++) {
		temp = Number[i];
		digit = stoi(temp);
		Cofficients.push_back(digit);
	}
	return Cofficients;
}
LongNumber SchonhageStrassen::Multiplication(LongNumber Number1, LongNumber Number2) {
	FurieTransfomation Furie;
	vector<int> result;
	vector<int> FirstCoefficients = FromLongNumberToVector(Number1);
	vector<int> SecondCoefficients = FromLongNumberToVector(Number2);
	Furie.multiply(FirstCoefficients, SecondCoefficients, result);
	Normalize(result);
	LongNumber resultOfMultiplication(FromVectorToString(result));
	return resultOfMultiplication;
}
string SchonhageStrassen::FromVectorToString(vector<int>& Coefficients) {
	string Number = "";
	for (int i = 0; i < Coefficients.size(); i++)
	{
		Number += to_string(Coefficients[i]);
	}
	return Number;
}
void SchonhageStrassen::Normalize(vector<int>& Coefficients) {
	int carry = 0;
	for (int i = 0; i < Coefficients.size(); ++i) {
		Coefficients[i] += carry;
		carry = Coefficients[i] / 10;
		Coefficients[i] %= 10;
	}
}