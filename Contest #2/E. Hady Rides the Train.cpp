#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main()
{
    
    ll row , col , n; cin>>n;
    row =n/4;
    col =n%4;
    if(row & 1 ) cout<<row<<" "<<abs(3-col)<<endl;
    else cout<<row<<" "<<col<<endl;
}
 