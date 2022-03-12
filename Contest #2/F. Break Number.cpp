#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef unsigned long long ull;
typedef long long ll;

int divide(ll n,ll &count){
   while(1){
        if(n % 2 != 0) return count;
        else {
            count++;
            n /=2;
        }
   }

}
int main()
{
    
    int n; cin>>n;
    ll in,Max = 0;
    for(int i = 0 ; i< n ; i++){
        cin>>in;
        ll x = 0;
        divide(in,x);
        Max = max(Max,x);
    }

    cout<<Max<<endl;
	return 0;
}