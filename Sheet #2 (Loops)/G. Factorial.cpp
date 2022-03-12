#include <iostream>

using namespace std;

long long fact(long long n);
int main()
{

	long long num,arr[100];
	cin >> num;


	for (int i = 0; i < num; i++)
		cin >> arr[i];

	for (int i = 0; i < num; i++)
		cout << fact(arr[i]) << endl;


	return 0;
}

long long fact(long long n)
{
	if (n < 1 && n >= 0)
		return 1;
	else
		return n * fact(n - 1);
}