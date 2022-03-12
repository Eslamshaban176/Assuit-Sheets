#include <iostream>

using namespace std;


int main()
{
	long long count = 0, num, Even = 0, Neg = 0, odd = 0, pos = 0;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> num;
		if (num % 2 == 0)
			Even++;
		else
			odd++;

		if (num > 0)
			pos++;
		else if(num < 0)
			Neg++;	
	}

		cout << "Even: " << Even << endl;

		cout << "Odd: " << odd << endl;

		cout << "Positive: " << pos << endl;

		cout << "Negative: " << Neg << endl;




	return 0;
}
 