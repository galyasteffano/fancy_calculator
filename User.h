#ifndef USER_H_
#define USER_H_
#include "Includes.h"
#include "FancyCalculator.h"
#include "enumClass.h"

class User {
private:
	int _choice;		//get user chouce
	bool _isValidChoice;
	const int _ZERO = 48;
	const int _EIGHT = 56;
	int _mathComp;		//math operation


public:

	User();
	void showMessage(void);		//display instructions on how to run the app.
	void setUchoice(int);
	int getUchoice(void);
	bool isItNumeric(string);	//check if the input had letters or other symbols
	bool isItSingleNumber(string);		//checks the size of the input string.
	double convertStringToDouble(string);
	int convertChoiceToInt(string);		//this function takes a string and uses only the first char, then converts it into int.
	bool isItWithinRange(string);		//checks if the number is between 1-7
};
#endif // !USER_H_

