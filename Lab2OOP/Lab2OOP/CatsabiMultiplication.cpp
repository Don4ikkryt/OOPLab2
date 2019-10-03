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