#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double price = 0.0, discount ,precentage;
	cin >> precentage >> discount;
	
	price = discount / (1 - (precentage / 100.0));

	cout <<fixed<< setprecision(2)<< price  << endl;



	return 0;
}