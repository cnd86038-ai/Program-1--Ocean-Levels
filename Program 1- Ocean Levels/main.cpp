#include <iostream>
using namespace std;

int main()
{
	const double RISE_RATE = 1.5; //millimeters per year
	double rise5Years = RISE_RATE * 5;

	// Optionally, print the result
	cout << "Ocean will rise " << rise5Years << " millimeters in 5 years." << endl;

	return 0;
}