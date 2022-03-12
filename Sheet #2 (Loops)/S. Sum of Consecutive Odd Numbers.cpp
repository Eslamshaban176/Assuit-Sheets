#include<iostream>

#include<algorithm>
#include <cmath>
using namespace std;


int main()
{
	int num1 = 0, num2 = 0, result = 0,num;
	
	cin >> num;
	for (int j = 0;j < num;j++)
	{
		cin >> num1 >> num2;
	
		for (int i = min(num1, num2)+1; i < max(num1, num2);i++) {
			if(i % 2 !=0)
				result += i;
		}
		cout  << result << endl;
		result = 0;
	} 
	


	return 0;
}