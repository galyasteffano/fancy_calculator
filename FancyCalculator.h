#ifndef FANCY_CALCULATOR_H_
#define FANCY_CALCULATOR_H_
#include "Includes.h"
#include "enumClass.h"
class FancyCalculator {
private:
	double _num1;
	double _num2;
	double _result;

	double add(double, double);
	double sub(double, double);
	double mul(double, double);
	double div(double, double);
	int rem(double, double);
	double expo(double, double);
	void displayResult(string, double, double, double);
	
public:
	FancyCalculator();
	void setNum1(double);
	void setNum2(double);
	bool isItNumeric(double);
	void setResult(double);
	double getNum1(void);
	double getNum2(void);
	double getResult(void);
	void displayComputedResult(int, double, double);
};
#endif // !FANCY_CALCULATOR_H_

