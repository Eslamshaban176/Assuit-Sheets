#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    
    int n,k; cin>>n>>k;
    int MIN = INT_MAX;
    for(int i = 0 ; i < n; i++){
        int in; cin>>in;
        MIN = min(MIN,in);
        if(i % k == k- 1) cout<<MIN<<" ",MIN = INT_MAX; 
    }
    if(MIN != INT_MAX) cout<<MIN<<endl;
    return 0;
}