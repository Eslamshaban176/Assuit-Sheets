#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
   
   ll s1, e1, s2, e2;
   cin>>s1>>e1>>s2>>e2;

	if(e1 < s2 || e2 < s1)
	    cout<<-1<<"\n";
	else
	    cout<<max(s1,s2)<<" "<<min(e1,e2)<<"\n";
	

	return 0;
}