#include <iostream>

using namespace std;

int main()
{
	
	    int sum = 0, num1 =0, num2=1, num = 0 ,temp = 0;
		cin>>num;

		(num <=1)?cout<<0:cout<<0<<" "<<1<<" ";
		for(int i = 2; i < num ; i++)
		{
			temp = num2;
			num2= num1+num2;
			num1=temp;
			cout<<num2<<" ";
		}
		

	return 0;
}