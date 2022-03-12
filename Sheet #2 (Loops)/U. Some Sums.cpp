#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
long long arr[25005],sum = 0,n;
int main()
{
	int num,A,B,digit = 0,sum = 0;
	cin>>num>>A>>B;
	
	for(int i = 1; i<= num;i++)
	{
		n = i;
		digit = 0;
		while(n > 0)
		{
			digit += (n % 10);
			n/=10; 
		}
		for(int j = A; j <= B ; j++)
		if(digit == j)
			sum +=i; 
	}
	cout<<sum<<endl;
 return 0;
}