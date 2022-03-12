#include<iostream>

using namespace std;

int main()
{
	long long num, num1, num2, number ,sum=0;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> num1 >> num2;
		number = abs(num2 - num1) + 1;
		sum = number * (num1 + num2) / 2;
		cout << sum << endl;
	}
	
		

	return 0;
}