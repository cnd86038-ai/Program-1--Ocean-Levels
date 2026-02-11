#include <iostream>
using namespace std;

int main()
{
	const double RISE_RATE = 1.5; //millimeters per year
	double rise5Years = RISE_RATE * 5;
	double rise7Years = RISE_RATE * 7;
	double rise10Years = RISE_RATE * 10;

	// Optionally, print the result
	cout << "Ocean will rise " << rise5Years << " millimeters in 5 years." << endl;
	cout << "Ocean will rise " << rise7Years << " millimeters in 7 years." << endl;
	cout << "Ocean will rise " << rise10Years << " millimeters in 10 years." << endl;

	return 0;
}