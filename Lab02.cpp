/* Name - Unmesh Datta

 007R

 Purpose - To calculate the time in days, hours, minutes and seconds from a user input of seconds.

 Input - Number of seconds that the user wants to get in days, hours, minutes and seconds.

 Output - Number of days, hours, minutes and seconds.

 Variables - seconds = Number of seconds entered by the user
			 seconds1 = A copy of the original value entered by the user
			 hours = Number of hours
			 days = Number of days
			 minutes = Number of minutes

 Processing - I take the number of seconds from the user and make a copy of it for future use. I then use the 
			  number of seconds to calculate the number of days. I then use the modulus function to get the 
			  remaining number of seconds.I then use the number of seconds to calculate the number of hours. 
			  I then use the modulus function to get the remaining number of seconds.I then use the number 
			  of seconds to calculate the number of minutes. I then use the modulus function to get the 
			  remaining number of seconds. Then, I output the data as calculated.

 Test Data Set Used = 1,000,000 seconds = 11 days, 13 hours, 46 minutes, 40 seconds.
					  54,000 seconds = 0 days, 15 hours, 0 minutes, 0 seconds.
					  60 seconds = 0 days, 0 hours, 1 minutes, 0 seconds.
					  45 seconds = 0 days, 0 hours, 0 minutes, 45 seconds.
					  0 seconds = 0 days, 0 hours, 0 minutes, 0 seconds.
*/
#include <iostream>

int main()
{
	using namespace std;

	long int seconds, seconds1;
	int days, minutes, hours;

	cout << "Enter the number of seconds" << endl;
	cin >> seconds;

	seconds1 = seconds;

	days = seconds / 86400;
	seconds = seconds%86400;
	hours = seconds / 3600;
	seconds = seconds%3600;
	minutes = seconds / 60;
	seconds = seconds%60;

	cout << seconds1 << " seconds corresponds to " << days << " days, " << hours << " hours, " << minutes 
		 << " minutes and " << seconds << " seconds."<<endl;
	return 0;
}