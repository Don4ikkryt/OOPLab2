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
void CatsabiMultiplication::DivedeIntoTwoParts(string &FirstNumber, string &SecondNumber) {
	NumberExtension(FirstNumber, SecondNumber);
	int separotor = int(FirstNumber.length() / 2);
	basis = pow(10, separotor);
	a.SetNewNumber(FirstNumber.substr(0, separotor));
	b.SetNewNumber(FirstNumber.substr(separotor, FirstNumber.length() -1));
	c.SetNewNumber(SecondNumber.substr(0, separotor ));
	d.SetNewNumber(SecondNumber.substr(separotor, SecondNumber.length() - 1));
}