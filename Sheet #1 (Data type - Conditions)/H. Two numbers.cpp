#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     double n,z,d,s,a;
    cin>>n>>z;
    a=floor(n/z);
    s=ceil(n/z);
    d=round(n/z);
    cout<<"floor "<<n<<" / "<<z<<" = "<<a<<endl;
    cout<<"ceil "<<n<<" / "<<z<<" = "<<s<<endl;
    cout<<"round "<<n<<" / "<<z<<" = "<<d<<endl;
    return 0;
}