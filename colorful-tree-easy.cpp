#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// simple solution when a node have more than 2 indegree then best case will be 2 and if only 1 indegree
// then the best cast would be 3
void solve() {
    ll  n;
    cin>>n;
    vector<ll> d(n,0);
    for(int i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        d[a-1]++;//minus 1 b/c of 0 index
        d[b-1]++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(d[i]==1) ans+=3;
        else ans+=2;
    }
    cout<<ans<<endl;
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