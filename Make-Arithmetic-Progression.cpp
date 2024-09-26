#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll x,y,z;
    cin>>x>>y>>z;
    if(abs(y-x)==abs(z-y))
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}