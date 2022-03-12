#include <iostream>

using namespace std;

int main()
{

   char ch;
   cin>>ch;

   if(ch >64 && ch < 91)
        cout<<"ALPHA\nIS CAPITAL"<<endl;
   else if(ch >96 && ch<123)
    cout<<"ALPHA\nIS SMALL"<<endl;
   else if(ch > 47 && ch < 59)
    cout<<"IS DIGIT"<<endl;
    return 0;
}