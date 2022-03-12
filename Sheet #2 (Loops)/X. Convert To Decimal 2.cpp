#include <bits/stdc++.h>

using namespace std;
void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}
#define endl "\n"
#define ll long long
vector<int> v;
void bin(ll n)
  {
    ll i;

    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
        v.push_back(1);

    }
  }

int main()
{
	init();
    ll num,last,n,x,t,cnt = 0,rev = 0;
    cin>>t;

    while(t--){
     cin>>n;
    bin(n);
    cnt = 0;
    rev = 0;
    int i = 0;
    while(v.size()!= i){
            rev += (v[i++] * pow(2,cnt++));

    }
        cout<<rev<<endl;
        v.clear();
    }

	return 0;
}
 