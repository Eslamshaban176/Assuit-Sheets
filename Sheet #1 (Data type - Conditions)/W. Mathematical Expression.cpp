#include<iostream>

using namespace std;

int main()
{
	int x, y, c;
	char op,ch='=';
	cin >> x >> op >> y >> ch >> c;
	
	switch (op)
	{
	case '+':
		if (x + y == c)
			cout << "Yes\n";
		else
			cout << x + y << endl;
		break;
	case '-':
		if (x - y == c)
			cout << "Yes\n";
		else
			cout << x - y << endl;
		break;
	case '*':
		if (x * y == c)
			cout << "Yes\n";
		else
			cout << x * y << endl;
		break;
	}



	return 0;
}