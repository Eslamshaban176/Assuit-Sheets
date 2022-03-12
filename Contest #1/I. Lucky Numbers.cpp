#include<iostream>

using namespace std;

int main()
{
	long long int num1 = 0, num2 = 0, result = 0;
	cin >> num1;

	result = num1 % 10;
	num2 =num1 / 10;

	if (result % num2 == 0 || num2 % result == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	


	return 0;
}