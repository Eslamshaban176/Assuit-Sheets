#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 long long x,n,result = 0 , sum = 0;
  
 cin >> n;
 
 for (int i = 1; i <= n; i++)
 {
  cin >> x;
  if(x > sum)
   	sum = x;
 }
 cout<<sum;

 return 0;
}