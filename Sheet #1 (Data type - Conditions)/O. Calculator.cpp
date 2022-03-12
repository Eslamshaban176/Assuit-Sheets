#include <iostream>

using namespace std;

int main()
{
   long long x,y;
   char ch;
   cin>>x>>ch>>y;
        switch(ch)
        {
            case '+':
                cout<<x+y<<endl;
            break;
              case '-':
            cout<<x-y<<endl;
            break;
              case '*':
            cout<<x*y<<endl;
            break;
              case '/':
            cout<<x/y<<endl;
            break;
        }
    return 0;
}