/* 
Name - Unmesh Datta

007R

Purpose - To help convert from English units to metric units based on user input.

Input - The type of conversion the user wants and the amount of English units the user wants converted into the respective metric units.

Output - Amount in metric units

Variables - option = Choice of conversion user wants to perform. (char)
			input = The value in English units the user wants to convert to metric units. (double)
			converted = The converted value in metric units. (double)

Processing - I ask the user for their choice of converting from inches to centimeters, quarts to liters, pounds to kilograms, miles to kilometers and ounces to grams.
			 I then ask the user to provide a value they want converted. I use known conversion factors to provide the user with the original value in English units 
			 and the converted value in the metric units as per the request. Meanwhile, at every input stage, I check for invalid inputs provided by the user and provide
			 another chance to enter a valid value.

Test Data Set Used = 10 inches = 25.4 centimeters
					 10 quarts = 9.464 liters 
					 10 pounds = 4.536 kilograms
					 10 miles  = 16.09 kilometers
					 10 ounces = 283.5 grams  

					 (All tested values and conversion factors are courtesy of Google Search. Values may be off by 0.02% if tested for exact value) 
*/

#include <iostream>

int main()
{
	using namespace std;

	char option;
	double input, converted;

	cout << "Welcome to the Unit Converter!" << endl << "1. Inches to Centimeters (I)";
    cout << endl << "2. Quarts to Liters (Q)";
	cout << endl << "3. Pounds to Kilograms (P)";
	cout << endl << "4. Miles to Kilometers (M)";
	cout << endl << "5. Ounces to grams (O)" << endl;
	cout << "Please enter your option" << endl;
	cin >> option;

	if (option != 'I' && option != 'i' && option != 'Q' && option != 'q' && option != 'P' && option != 'p' && option != 'M' && option != 'm' && option != 'O' && option != 'o')
	{
		cout << "Please enter a valid option" << endl;
		cin >> option;
	}

	cout << "Enter the value you want converted to" << endl;
	cin >> input;

	if (input <= 0)
	{
		cout << "Please enter a value that is valid" << endl;
		cin >> input;
	}

	if (option == 'I' || option == 'i')
	{
		converted = input * 2.54;
		cout << input << " inches is " << converted << " centimeters." << endl;
	}

	if (option == 'Q' || option == 'q')
	{
		converted = input * 0.946;
		cout << input << " quarts is " << converted << " litres." << endl;
	}

	if (option == 'P' || option == 'p')
	{
		converted = input * 0.454;
		cout << input << " pounds is " << converted << " kilograms." << endl;
	}

	if (option == 'M' || option == 'm')
	{
		converted = input * 1.609;
		cout << input << " miles is " << converted << " kilometers." << endl;
	}

	if (option == 'O' || option == 'o')
	{
		converted = input * 28.35;
		cout << input << " ounces is " << converted << " grams." << endl;
	}
	return 0;
}