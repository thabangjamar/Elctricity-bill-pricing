// Electricitybill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	double Units, Bill;
	int fixedcharge = 110;

	cout << " Enter the units which you have used this month " << endl;
	cin >> Units;

	if (Units <= 150) {
		Bill = fixedcharge + Units * 5.50;
		cout << " Your bill of this month is equal to R" << Bill;

	}

	else if (Units > 150 && Units <= 300) {
		Bill = fixedcharge + (150 * 5.50) + (Units - 150) * 6;
		cout << " Your bill of this month is equal to R" << Bill;
	}

	else if (Units > 300 && Units <= 500) {
		Bill = fixedcharge + (150 * 5.50) + (150 * 6) + (Units - 300) * 6.50;
		cout << " Your bill of this month is equal to R" << Bill;
	}

	else if (Units > 500) {
		Bill = fixedcharge + (150 * 5.50) + (150 * 6) + (200 * 6.50) + (Units - 500) * 7;
		cout << " Your bill of this month is equal to R" << Bill;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
