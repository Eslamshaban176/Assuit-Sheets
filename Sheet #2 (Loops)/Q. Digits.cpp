#include <iostream>

using namespace std;


int main()
{
	long long num,arr[100],last;
	cin >> num;

	for (int i = 0; i < num; i++)
		cin >> arr[i];
	

	for (int i = 0; i < num; i++)
	{
		do
		{
			last = arr[i] % 10;
			cout << last << " ";
			arr[i] /= 10;

		} while (arr[i] != 0);
		cout << endl;
		
	}
	
	

	return 0;
}
 