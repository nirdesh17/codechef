#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll r,g,b;
    cin>>r>>g>>b;
    if(r>(g+b) || g>(r+b) || b>(r+g))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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