#include "LongNumber.h"
#include <string>
#include <iostream>
#include "CatsabiMultiplication.h"


using namespace std;

int main() {
	LongNumber num1("999112749493504");
	LongNumber num2("123");
	LongNumber num3;
	num3 = num2 - num1;
	
	cout << num3.GetNumber() << endl;
	LongNumber num4("345675345345");
	CatsabiMultiplication catsubimult;
	LongNumber num5 = catsubimult.Multiplication(num1, num4);
	cout << num5.GetNumber();
	system("pause");
	return 0;
}