#include<iostream>

using namespace std;

int main()
{
	 int num1, num2, result;
	 cin >> num1 >> num2;

	 if ((num1 == 0 && num2 == 0) || abs(num1 - num2) > 1)
		 cout << "NO\n";
	 else
		 cout << "YES\n";


	return 0;
}