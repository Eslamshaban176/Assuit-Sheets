#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x,y,z,d;
  cin>>x;

   z = x/365;
   d = (x%365) / 30;
   y = (x%365) % 30 ;
   cout<<z<<" years\n"<<d<<" months\n"<<y<<" days"<<endl;
    return 0;
}