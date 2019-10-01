#include "CatsabiMultiplication.h"


CatsabiMultiplication::CatsabiMultiplication(std::string* firstNumber, std::string* secondNumber) {
	this->firstNumber = firstNumber;
	this->secondNumber = secondNumber;

}
void CatsabiMultiplication::findSeparetor() {
	if (firstNumber->length == secondNumber->length) {
		separetor = int(firstNumber->length / 2);
	}
}
