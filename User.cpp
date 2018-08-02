#include "User.h"

User::User() {
	_choice = 0;
	_mathComp = 0;
}
/*** Instruct user how to use the app **/
void User::showMessage() {
	printf("\n\nTo make a selection,"
		"enter the number and press ENTER.\n"
		"\t1 Add 2 numbers\n\t2 Subtract a number from another\n"
		"\t3 Multiply 2 numbers\n\t4 Divide 2 numbers\n\t5 Modulus of 2 numbers\n"
		"\t6 Raise a number to a power\n\t7 Quit the program\n");
}
/* setter method*/
void User::setUchoice(int choice) {
	_choice = choice;
}
int User::getUchoice() {
	return _choice;
}

double User::convertStringToDouble(string str) {
	std::string::size_type sz;
	return stod(str, &sz);		//convert string to double
}
int User::convertChoiceToInt(string ch) {
	int i_choice = 0;
	i_choice = (int)ch[0];		//get the first char in the string	and convert to ASCII of int
	i_choice = i_choice - 48;	
	return i_choice;
}
/*Checks if the input was numeric.*/
bool User::isItNumeric(string user_choice) {
	const int POSITION = 0;
	if (!isdigit(user_choice[POSITION]))			//47 is  0 , 56 is 8...
	{
		printf("You must enter a numeric value.\n");
		return false;
	}
	return true;
}
bool User::isItSingleNumber(string user_choice) {
	int strLen = user_choice.size();
	if (strLen > 1) {
		printf("Please enter a single value.\n");
		return false;
	}
	return true;
}
bool User::isItWithinRange(string user_choice) {
	//asume all previous tests are passed and the input is validated.
	_mathComp = convertChoiceToInt(user_choice);
	if (_mathComp < 0 || _mathComp>8) {
		printf("Please choose a value between 1 and 7.\n");
		return false;
	}
	return true;
}