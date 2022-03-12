#include<iostream>

using namespace std;

int main()
{
	long long num, memo ,momo;
	cin >> memo >> momo >> num;
	
	if (memo % num == 0 && momo % num == 0)
		cout << "Both\n";
	else if (memo % num == 0)
		cout << "Memo\n";
	else if (momo % num == 0)
		cout << "Momo\n";
	else
		cout << "No One\n";



	return 0;
}