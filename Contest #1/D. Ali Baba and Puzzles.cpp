#include<iostream>

using namespace std;

int main()
{
	long long int num1, num2, num3, result;
	cin >> num1 >> num2 >> num3 >> result;

	if (num1 - num2 + num3 == result)
		cout << "YES\n";
	else if (num1 + num2 - num3 == result)
		cout << "YES\n";
	else if (num1 - num2 * num3 == result)
		cout << "YES\n";
	else if (num1 * num2 - num3 == result)
		cout << "YES\n";
	else if (num1 + num2 * num3 == result)
		cout << "YES\n";
	else if (num1 * num2 + num3 == result)
		cout << "YES\n";
	else
		cout << "NO\n";



	return 0;
}