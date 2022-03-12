#include<iostream>

using namespace std;

int main()
{
	char lowerletter;
	cin >> lowerletter;
	
	if (lowerletter > 96 && lowerletter < 123)
		{
				++lowerletter;
			if (lowerletter > 122)
				lowerletter = 97;
	
			cout << lowerletter << endl;
		}



	return 0;
}