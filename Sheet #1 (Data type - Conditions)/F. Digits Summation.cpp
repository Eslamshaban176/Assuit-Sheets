#include <iostream>

using namespace std;

int main()
{
    long long first,last,n,b;
    cin>>n>>b;
    first=b%10;
    last = n % 10;
    cout<<first + last<<endl;
    return 0;
}