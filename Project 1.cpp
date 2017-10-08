/*
Name - Unmesh Datta

007R

Purpose - To calculate the frequency, energy and determine the type of wave based on the user's input of wavelength

Input - Wavelength in the specified format

Output - Corresponding frequency, energy and type of wave.

Variables - wavelength = Wavelength in a specified format
			frequency = Corresponding frequency
			energy = Corresponding energy

Constants - planck = Used for the value of Planck's Constant in the calculations of frequency and energy.

Processing - I take the wavelength from the user in a specified format and check that value to a set boundary. Once it passes the check, 
			 the frequency and energy is calculated. I also show the user what type of wave it is based on another checking sequence. (as
			 the question in the textbook requires us to do so). I then output the values of frequency, energy and the type of wave.

Test Data Set Used - 3E-4 meters = 0.0003 meters, 1e+12 Hertz, 6.626e-22 Joules and Infrared Radiation Type 
					 3E-7 meters = 3E-7 meters, 1e+15 Hertz, 6.626e-19 Joules and Ultraviolet Radiation Type
					 3E-18 meters = 3E-18 meters, 1e+26 Hertz, 6.626e-8 Joules and Gamma Ray Radiation Type
					 10000 meters = Error ("Please try again")
					 -2 meters = Error ("Please try again")
					 1.5523523E-4 meters = 0.00015523523 meters, 1.93255e+12 Hertz, 1.281e-21 Joules and Infrared Radiation Type 
					 3 meters = 3 meters, 1e+8 Hertz, 6.626e-26 Joules and Radiowave Radiation Type
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double planck = 6.626E-034;

	double wavelength, frequency, energy;

	cout << "Enter the wavelength of the wave in the following format" << endl;
	cout << " 1.5*10^-7 = 1.5E-7" << endl<<endl;

	cin >> wavelength; //Entering the value of wavelength

	cout << endl;

	if (wavelength < 1E-20 || wavelength > 10 || wavelength<0)
	{
		cout << endl <<	"Please enter a value in the range from 1E-20 to 10. Please try again." << endl; //Checking for the parameters
		cin >> wavelength;
	}


	frequency = (3E+8) / wavelength; //Calculation of frequency 
	energy = planck * frequency;     //Calculation of energy

	cout << wavelength << " meters corresponds to " << frequency << " hertz"<<endl<<endl;

	cout<< "The given wavelength corresponds to ";

	if (wavelength <= 1E-11)
		cout << "Gamma ray radiation type.\n";
	else if (wavelength <= 1E-8)
		cout << "X-ray radiation type.\n";
	else if (wavelength <= 4E-7)
		cout << "Ultaviolet radiation type.\n";
	else if (wavelength <= 7E-7)
		cout << "Visible Light radiation type.\n";
	else if (wavelength <= 1E-3)
		cout << "Infrared radiation type.\n";
	else if (wavelength <= 1E-2)
		cout << "Microwaves radiation type.\n";
	else
		cout << "Radio wave radiation type\n";

	cout << endl << wavelength << " meters corresponds to " << frequency << " Hertz and has an energy of " <<setprecision(4) << energy << " Joules." << endl;
	return 0;
}