/*
Name - Unmesh Datta

007R

Purpose - To calculate the sum of a given sequence (1 + x + x^2 + x^3 + x^4......x^n) based on values provided by the user

Input - The values of the variable and power for the given sequence

Output - Sum of the sequence (1 + x + x^2 + x^3 + x^4......x^n)

Variables - x = Variable in the sequence (double)
			n = Power term in the sequence (double)
			pow = The power value to add to the sum each time (double)
			sum = Sum of the whole series (double)

Processing - I first ask the user to provide me with the variable and power term of the sequence (1 + x + x^2 + x^3 + x^4......x^n).
			 I then check for whether the value of the power term is negative, positive or 0. If it is 0, I immediately display the
			 answer as 1. If it is positive or negative, then I execute loops to help calculate the value by using the pow variable 
			 to store the power term value at each step and the sum variable to store the sum of the sequence after each step. I 
			 then output the value of sum back to the user.

Test Data Set Used - x = 5, n = 4, sum = 781
					 x = 6, n = -4, sum = 1.9984
					 x = 8, n = 0, sum = 1

(All tested values are courtesy of my calculator. Values may be off by 0.03%)
*/

#include <iostream>

using namespace std;

int main()
{
	double x, n, pow = 1.0, sum = 0.0;
	cout << "Enter a value for x and n in the following equation of 1 + x + x^2 + x^3 + x^4......x^n" << endl << endl;

	cout << "x = ";
	cin >> x;

	cout << endl << "n = ";
	cin >> n;

	if (n == 0)
	{
		cout << endl << "The value of the series is 1" << endl;

	}

	else if (n > 0)
	{
		for (int i = 0; i <= n; i++)
		{
			sum = sum + pow;
			pow = pow*x;
		}
		cout << endl << "The value of the series is " << sum << endl;
	}

	else
	{
		for (int i = 0; i >= n; --i)
		{
			sum = sum + (1 / pow);
			pow = pow*x;
		}
		cout << endl << "The value of the series is " << sum << endl;
	}
}
