#include<iostream>
#include<string>
using namespace std;

//[0,25], (25,50], (50,75], (75,100]

int main()
{
	double n = 0.0;
	cin >> n;

	if (n >= 0.0 && n <= 25.0)
		cout << "Interval [0,25]\n";
	else if (n > 25.0 && n <= 50.0)
		cout << "Interval (25,50]\n";
	else if (n > 50.0 && n <= 75.0)
		cout << "Interval (50,75]\n";
	else if (n > 75.0 && n <= 100.0)
		cout << "Interval (75,100]\n";
	else
		cout << "Out of Intervals\n";
	

	return 0;
}