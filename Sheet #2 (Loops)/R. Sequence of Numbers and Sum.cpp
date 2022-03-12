#include<iostream>

#include<algorithm>
#include <cmath>
using namespace std;


int main()
{
	int num1 = 0, num2 = 0, result = 0;
	
	
	do
	{
		cin >> num1 >> num2;
		if (num1 < 1 || num2 < 1)
			break;
		for (int i = min(num1, num2); i <= max(num1, num2);i++) {
			cout << i << " ";
			result += i;
		}
		cout << "sum =" << result << endl;
		result = 0;
	} while (num1 >= 1 && num2 >= 1);
	


	return 0;
}