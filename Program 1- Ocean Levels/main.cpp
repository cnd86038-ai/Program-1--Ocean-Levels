#include <iostream>
using namespace std;

int main()
{
	const double RISE_RATE = 1.5; //millimeters per year
	int years = 5;
	cout << "Year\tOcean Level (mm/year)" << endl;
	double oceanLevel = 0.0;
	for (int year = 1; year <= years; year++) {
		oceanLevel += RISE_RATE;
		cout << year << "\t" << oceanLevel << endl;
	}
}