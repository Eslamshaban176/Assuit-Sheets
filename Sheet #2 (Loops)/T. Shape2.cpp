#include <iostream>

using namespace std;


int main()
{

	int num;
	cin >> num;


	for (int i = 1; i <= num; i++)
	{
		for (int s = 1; s <= num - i; s++)
			cout << " ";
		for (int j = 1; j < 2 * i; j++)
			cout << "*";
		cout << endl;
	}


	return 0;
}
 