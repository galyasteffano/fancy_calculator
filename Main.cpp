#include "FancyCalculator.h"
#include "User.h"


int main()
{
	bool leave=false;
	bool fail = false;
	double a = 0;
	double b=0;
	string userChoice;
	User user;
	FancyCalculator calculate;
	
	while (!leave) {
		user.showMessage();
		cin >> userChoice;
		if (user.isItSingleNumber(userChoice) && user.isItNumeric(userChoice) && user.isItWithinRange(userChoice)) {
			user.setUchoice(user.convertChoiceToInt(userChoice)); //save the valid input.
			if (user.convertChoiceToInt(userChoice) == QUIT)
				leave = true;
			else {
				printf("Please enter a number :");
				cin >> a;
				printf("\n And another numebr :");
				cin >> b;
				if (cin.fail()) {		//handle bad input
					fail = true;
					leave = true;
				}
				else {
					calculate.setNum1(a);
					calculate.setNum2(b);
					calculate.displayComputedResult(user.getUchoice(), calculate.getNum1(), calculate.getNum2());
				}
			}
			
		}
		else {
			printf("Enter valid input: ");
		}
	}
	if (fail) {
		printf("You entered values that I don't know how to handle. Goodbye!");
	}
	else {
		printf("Thanks for using the app.");
	}
	
	return 0;
}



