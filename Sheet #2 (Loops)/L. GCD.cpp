#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	long long num1, num2, count = 0;
	cin >> num1 >> num2;

	for (int i = 1; i <= min(num1,num2); i++)
	{
		if ((num1 % i == 0) && (num2 % i == 0))
			count = i;
	}

	cout << count << endl;


	return 0;
}