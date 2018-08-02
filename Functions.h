#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

using namespace std;

double calculator(int choice, double num1, double num2)
{
	double result;
	int int_result;
	switch (choice)
	{
	case 1:
		result = num1 + num2;
		return result;
		break;
	case 2:
		result = num1 - num2;
		return result;
		break;
	case 3:
		result = num1 * num2;
		return result;
		break;
	case 4:
		if (num2 == 0)
		{
			cout << "Cannot divide by 0!" << endl;
			exit(EXIT_FAILURE);
		}
		result = num1 / num2;
		return result;
		break;
	case 5:
		int_result = (int)num1 % (int)num2;
		return int_result;
		break;
	case 6:
		result = pow(num1, num2);
		return result;
		break;
	case 7:
		return 0;
		break;
	}
}
void calculator_result(int pic, double n1, double n2)
{
	double result;
	if (pic == 1)
	{
		result = calculator(1, n1, n2);
		cout << "The sum of " << n1 << " and " << n2 << " is: " << result << endl;
	}
	else if (pic == 2)
	{
		result = calculator(2, n1, n2);
		cout << "The difference between " << n1 << " and " << n2 << " is: " << result << endl;
	}
	else if (pic == 3)
	{
		result = calculator(3, n1, n2);
		cout << "The product of " << n1 << " and " << n2 << " is: " << result << endl;
	}
	else if (pic == 4)
	{
		if (n2 == 0)
			exit(EXIT_FAILURE);
		result = calculator(4, n1, n2);
		cout << n1 << " divided by " << n2 << " is: " << result << endl;
	}
	else if (pic == 5)
	{
		result = calculator(5, n1, n2);
		cout << n1 << " modulus " << n2 << " is: " << result << endl;
	}
	else if (pic == 6)
	{
		result = calculator(6, n1, n2);
		cout << n1 << " raised to the power of " << n2 << " is: " << result << endl;
	}
}
bool isInvalidInput(string numA)
{
	int lenA = numA.size();
	for (int i = 0; i < lenA; i++)
	{
		if ((numA[i] <= 47) || (numA[i] >= 58))		//not a number 48=>0 57->9
		{
			return false;
		}
	}
	return true;
}
#endif // !FUNCTIONS_H_

