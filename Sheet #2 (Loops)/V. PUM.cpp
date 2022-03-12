#include <iostream>

using namespace std;


int main()
{
	    int  num = 0,count=1;

		cin>>num;
		
		for(int i = 1; i <= num ; i++)
			{
				if(count % 4 ==0)
					{
						count++;
						cout<<" PUM\n";
						i--;
						continue;
					}
				cout<<count++<<" "<<count++<<" "<<count++<<"";
			}
			cout<<" PUM\n";
	return 0;
}