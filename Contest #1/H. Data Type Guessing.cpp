#include<iostream>


using namespace std;


int main()
{

	double num1, num2, num3, result , Res2;
	long long int Res ;
	cin >> num1 >> num2 >> num3;
	result = (num1 * num2) / num3;
	Res = result;
	Res2 = result - Res;

	if (Res2 > 0)
		cout << "double\n";
	else if (Res <= 2147483647)
		cout << "int\n";
	else
		cout << "long long\n";


	return 0;
}