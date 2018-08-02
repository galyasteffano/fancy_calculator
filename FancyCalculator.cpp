#include "FancyCalculator.h"
FancyCalculator::FancyCalculator() {
	_num1=0;
	_num2=0;
	_result=0;
}
void FancyCalculator::setNum1(double x) {
	_num1 = x;
}
void FancyCalculator::setNum2(double y) {
	_num2 = y;
}

void FancyCalculator::setResult(double result) {
	_result = result;
}
double FancyCalculator::getNum1(void) {
	return _num1;
}
double FancyCalculator::getNum2(void) {
	return _num2;
}
double FancyCalculator::getResult(void) {
	return _result;
}
bool FancyCalculator::isItNumeric(double x) {
	if (isdigit(x))
		return true;
	return false;
}
/*** This function performs mathematical operations based on the
	 user's choice.												***/
double FancyCalculator::add(double a, double b) {
	return a + b;
}
double FancyCalculator::sub(double a, double b) {
	return a - b;
}
double FancyCalculator::mul(double a, double b) {
	return a * b;
}
double FancyCalculator::div(double a, double b) {
	if (b == 0)
	{
		printf("Cannot divide by 0!");
		exit(EXIT_FAILURE);
	}
	return a / b;
}
int FancyCalculator::rem(double a, double b) {
	return (int)a % (int)b;
}
double FancyCalculator::expo(double a, double b) {
	return pow(a, b);
}

void FancyCalculator::displayResult(string nameOperation,double n1, double n2, double result) {
	cout<<"The "<<nameOperation<<n1<<" and "<<n2<<" is: "<<result<<endl;
}
void FancyCalculator::displayComputedResult(int pic, double n1, double n2) {
switch (pic)
	{
	case ADD:
		{
			setResult(add(n1, n2));
			displayResult("sum of  ", n1, n2, getResult());
			break;
		}
	case SUB:
		{
			setResult(sub(n1, n2));
			displayResult("difference of ", n1, n2, getResult());
			break;
		}
	case MUL:
		{
			setResult(mul(n1, n2));
			displayResult("product of ", n1, n2, getResult());
			break;
		}
	case  DIV:
		{
			setResult(div(n1, n2));
			displayResult(" quotient of ", n1, n2, getResult());
			break;
		}
	case REM:
		{
			setResult(rem(n1, n2));
			displayResult(" modulus of: ", n1, n2, getResult());
			break;
		}
	case POW:
		{
			setResult(expo(n1, n2));
			displayResult(" power of ", n1, n2, getResult());
			break;
		}
	}
}