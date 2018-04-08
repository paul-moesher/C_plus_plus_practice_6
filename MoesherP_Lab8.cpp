//---------------------------------------------------------------------------------------------------------------------------------------------------------------
// Paul Moesher                                                  Lab 8                                                  3/14/18
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calcMAP(double, double);

string checkMAP(double);

string checkRISK(double);


int main()
{

	int S_pressure, D_pressure;
	double MAP;
	string I_message, Risk;

	cout << "Enter your systolic pressure" << endl;
	cin >> S_pressure;

	cout << "Enter your diastolic pressure" << endl;
	cin >> D_pressure;
	MAP = calcMAP(S_pressure, D_pressure);

	cout << setprecision(2) << fixed;
	cout << "Your mean Arterial pressure is " << MAP  << endl;

	I_message = checkMAP(MAP);

	cout << I_message << endl;

	Risk = checkRISK(MAP);

	cout << Risk << endl;


	cout << endl;
	system("pause");
	return 0;

}

double calcMAP(double S_pressure, double  D_pressure)
{
	double MAP;

	MAP = D_pressure + (0.333333 * (S_pressure - D_pressure));

	return(MAP);
}


string checkMAP(double MAP)
{

	if (MAP < 70) {
		return "Hypotension";
	}
	else if (MAP >= 70 && MAP < 100) {
		return "Normal";
	}
	else if (MAP >= 100 && MAP < 120) {
		return "Stage 1 hypertension";
	}
	else if (MAP >= 120 && MAP < 135) {
		return "Stage 2 hypertension";
	}
	else {
		return "Stage 3 hypertension";
	}

	}



string checkRISK(double MAP)

{
	if (MAP < 70) {
		return "Low";
	}
	else if (MAP >= 70 && MAP < 110) {
		return "Medium";
}
	else {
		return "High";
	}




}

