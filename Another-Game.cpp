#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll j=n-1;
    while(j>=0)
    {
        if(a[j]!=j+1)
        {
            break;
        }
        j--;
    }
    if(j>0)
        cout<<j+1+1<<endl;
    else
        cout<<0<<endl;
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