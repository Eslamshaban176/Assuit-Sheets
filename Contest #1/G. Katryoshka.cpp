#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

int main()
{
	init();
	long long eye, mouth, body, result = 0;
	cin >> eye>>mouth>>body;

	if (body == 0 || eye == 0)
		cout << 0 << endl;
	else {
		if((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye) || (mouth < body && mouth >= eye)) {
			result = min(eye,body);
			cout<<result<<endl;}
		else if(mouth < body && mouth < eye)
		{
			result = mouth;
			body -=mouth;
			eye -=mouth;
			result +=min(eye/2,body);
			cout<<result<<endl;
		}	
	}

	return 0;
}
 