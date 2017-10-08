/*
Name - Unmesh Datta

007R

Purpose - To find the maximum, minimum and the average of 100 conductivity values of widgets stored in one batch

Input - The values of conductivity for 100 widgets

Output - The maximum, minimum and average of the conductivity values

Header Files Included - iostream = For cin, cout etc.
						string = For the variable and getline

Variables - n = Variable that stores the number of widgets (pre-determined) (integer)
			i = Loop Variable (integer)
			conductivity = Stores the conductivity values of each widget entered by the user (integer)
			conductivity_max = Stores the maximum value of conductivity as per entered by the user (integer)
			conductivity_min = Stores the minimum value of conductivity as per entered by the user (integer)
			conductivity_sum = Stores the sum of all the conductivity values as per entered by the user (integer)
			batch_name = Stores the name of the batch (string)

Processing - I first ask the user to provide a name for the batch. Then, they are prompted to enter 100 values of conductivity.
			 Then, I check for the maximum and minimum values while the user enters the values of conductivity. I also calculate
			 the sum of all the conductivity values that the user has entered till then.I then display batch name, maximum, 
			 minimum and the average values of conductivity as entered by the user.

Test Data Set Used - n = 10 (Refer to the comment at the point of declaration to change n to this value)
					 Batch Name = Unmesh
					 Value for Conductivity 1 = 4
					 Value for Conductivity 2 = 5
					 Value for Conductivity 3 = 6
					 Value for Conductivity 4 = 7
					 Value for Conductivity 5 = 6
					 Value for Conductivity 6 = 5
					 Value for Conductivity 7 = 4
					 Value for Conductivity 8 = 5
					 Value for Conductivity 9 = 6
					 Value for Conductivity 10 = 7

					 Average value is = 5.5
					 Minimum value is = 4
					 Maximum value is = 7

(All tested values are courtesy of my calculator and calculations done by hand. Also, the code has been tested for common 
 error cases in entering the value of conductivity.)
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{

	string batch_name;
	int n = 100, conductivity, conductivity_min, conductivity_max, conductivity_sum = 0; //Note: Edit n here to 10 for my test case

	cout << "Enter batch name: ";
	getline (cin, batch_name);
	cout << "There are " << n << " widgets per batch" << endl;

	int i = 1;

	while (i<=n) 
	{
		cout << "Enter Conductivity Value for Widget " << i<<" :";
		cin >> conductivity;

		while (conductivity < 3 || conductivity > 10)
		{
			cout << "Invalid Value. Enter a value between 3 and 10." << endl;
			cout << "Enter Conductivity Value for Widget " << i << " :";
			cin >> conductivity;
		}
        
		if (i == 1)
		{
			conductivity_max = conductivity;
			conductivity_min = conductivity;
		}
		else
		{
			if (conductivity < conductivity_min)
			{
				conductivity_min = conductivity;
			}

			if (conductivity > conductivity_max)
			{
				conductivity_max = conductivity;
			}
		}

		conductivity_sum += conductivity;
		i++;
	}

	cout << endl << "Batch name: " << batch_name << endl;
	cout << "Average thermal conductivity: " << static_cast<double>(conductivity_sum) / n << endl;
	cout << "Minimum thermal conductivity: " << conductivity_min << endl;
	cout << "Maximum thermal conductivity: " << conductivity_max << endl;

}