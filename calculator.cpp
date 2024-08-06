#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout << "Enter first number";
	cin >> num1;
	cout << "Enter second number";
	cin >> num2;
	cout << "Select the process\n";
	cout << "(1) +\n(2) -\n(3) *\n(4) \\ \n";
	cin >> num3;
	if (num3 == 1)
	{
		cout << num1 + num2;
	}
	if (num3 == 2)
	{
		cout << num1 - num2;
	}
	if (num3 == 3)
	{
		cout << num1 * num2;
	}
	if (num3 == 4)
	{
		cout << num1 / num2;
	}

