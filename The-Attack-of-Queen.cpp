#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int sum(ll a,ll b,ll c)
{
    ll count = 0;
   ll min_left = min(a, b) - 1;
   ll max_left = c - max(a, c+1 - b);
   ll max_right = c - max(a, b);
   ll min_right = min(a, c+1 - b) - 1;
   count = min_left + min_right + max_right + max_left;
   return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        cout<<sum(x,y,n)+(2*n-2)<<endl;
    }
    return 0;
}