#include<iostream>

#include<algorithm>
#include <cmath>
using namespace std;


int main()
{
	int num1, num2, counter = 0;
	cin >> num1 >> num2;

	for (int i = 0; i <= num1; i++)
	{	
		for (int x = 0; x <=num1; x++)
		{
			if (num2 - i - x >= 0 && num2 - i - x <= num1)
				counter++;
		}

	}
	cout << counter << endl;


	return 0;
}