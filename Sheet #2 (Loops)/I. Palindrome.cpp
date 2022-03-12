#include <iostream>

using namespace std;


int main()
{

	long long num, temp, rev = 0, last;
	cin >> num;

	temp = num;
	do
	{
		last = num % 10;
		rev = (rev * 10) + last;
		num /= 10;
	} while (num != 0);

	if (temp == rev)
		cout <<rev<< "\nYES\n";
	else
		cout <<rev<< "\nNO\n";
		


	return 0;
}
 