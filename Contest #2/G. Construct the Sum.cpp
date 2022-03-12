#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define sz(s) (int)(s.size())

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    
   
    int t;cin>>t;
    while(t--){
    vector<int> v;
    ll s , n; cin>>n>>s;
    if(s<= n) cout<<s<<endl;
    else {
        for(int i= n ; i >= 1; i--)
            if(s >= i ) s -=i,v.push_back(i);
        if(s == 0){
         for(int i = 0; i< sz(v);i++) cout<<v[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;    
    }
}}