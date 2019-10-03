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
		cat.NumberExtension(nummm1, nummm2);
		cout << nummm1;
		cout << nummm2;
	system("pause");
	return 0;
}