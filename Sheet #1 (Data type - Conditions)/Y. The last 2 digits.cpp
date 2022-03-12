#include<iostream>

using namespace std;

int main()
{
	int x, y, c, f, total = 0;
	cin >> x >> y>> c>> f ;
	
	x %= 100;
	y %= 100;
	c %= 100;
	f %= 100;

	total = (x * y * c * f) % 100 ;

	if (total % 100 <= 9)
		cout << "0" << total << endl;
	else
		cout << total << endl;


	



	return 0;
}