#include "logic.h"
#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "Input your month: ";
	cin >> month;

	cout << "Quantity of days in your month: " << get_quantity_of_days(month) << endl;

	return 0;
}