#include <iostream>
using namespace std;

int main()
{
	const double RISE_RATE = 1.5; //millimeters per year
	double rise5Years = RISE_RATE * 5;
	cout << "Year\tOcean Level (mm/year)" << endl;
	double oceanLevel = 0.0;
// Add a variable to define the number of years to simulate
const int years = 10;
	for (int year = 1; year <= years; year++) {
		oceanLevel += RISE_RATE;
		cout << year << "\t" << oceanLevel << endl;
	}
}