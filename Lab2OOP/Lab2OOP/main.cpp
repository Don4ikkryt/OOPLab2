#include "LongNumber.h"
#include <string>
#include <iostream>
#include "CatsabiMultiplication.h"


using namespace std;

int main() {
	LongNumber num1("99911");
	LongNumber num2("123");
	LongNumber num3;
	num3 = num1 + num2;
	
	cout << num3.GetNumber() << endl;
	CatsabiMultiplication cat;
	string nummm1 = "1322434";
	string nummm2 = "21";
	cat.DivedeIntoTwoParts(nummm1, nummm2);
	cout << cat.a.GetNumber() + ' ' + cat.b.GetNumber() + ' ' + cat.c.GetNumber() + ' ' + cat.d.GetNumber();
			
	system("pause");
	return 0;
}