#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long digit,first,n;
   cin>>n;
    digit = (int)log10(n);
    first = n / pow(10,digit);
    if(first % 2 ==0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;
    return 0;
}