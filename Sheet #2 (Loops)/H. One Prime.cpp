#include<iostream>

#include<algorithm>
#include <cmath>
using namespace std;

int main()
{
	int num;
	bool cond = true;
	cin >> num;



		for (int i = 2; i <= num / 2; i++)
			if (num % i == 0) {
				cond = false;
				break;
			}
			else
				cond = true;

	if (cond)
		cout << "YES\n";
	else
		cout<<"NO\n";
	


	return 0;
}