#include<iostream>

using namespace std;

int main()
{
	double d, f, n;
	cin >> n;

	d = (int)n;
	f = n - d;

	if (f==0.0)
		cout << "int " << n << endl;
	else
		cout << "float " << d << " " << f << endl;



	
		
return 0;
}