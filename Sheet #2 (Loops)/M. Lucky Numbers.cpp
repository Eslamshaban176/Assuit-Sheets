#include <iostream>

using namespace std;


int main()
{
	long long divide , num1, num2 , last , total = 0;
	cin >> num1 >> num2;
	bool lucky = false, stop = true;
	for (int i = num1; i <= num2; i++)
	{
		divide = i;
		total = i;
		while (divide != 0)
		{
			last = divide % 10;
			divide /= 10;
			if (last == 4 || last == 7)
			{
				lucky = true;
				if (divide == 0)
				{
					stop = false;
					cout << total << " ";
				}
			
			}
			else
			{
				lucky = false;
				break;
			}
			

		}
		

	}
	
	if (lucky == false && stop == true)
		cout << -1 ;
	cout << endl;



	return 0;
}
 