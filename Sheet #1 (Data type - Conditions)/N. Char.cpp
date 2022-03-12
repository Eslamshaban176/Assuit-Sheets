#include <iostream>

using namespace std;

int main()
{

   char ch;
   cin>>ch;

   if(ch >64 && ch < 91)
        cout<<char(ch+32)<<endl;
   else if(ch >96 && ch<123)
    cout<<char(ch-32)<<endl;
    return 0;
}