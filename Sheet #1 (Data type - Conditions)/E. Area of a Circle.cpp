#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double PI =3.141592653;
    long double R,A;
    cin>>R;
    A = PI * R * R;
    cout << fixed << setprecision(9);
    cout<<A<<"\n";
    return 0;
}