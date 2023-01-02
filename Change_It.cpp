#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> nonrepeat(ll s[], ll n)
{
    vector<ll> a;
    for(ll i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            a.push_back(s[i]);
        }
    }
    a.push_back(s[n-1]);
    return a;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        ll b[n];
        for(ll k=0;k<n;k++)
        {
            cin>>b[k];
        }
        sort(b,b+n);
        vector<ll> c=nonrepeat(b,n);
        ll max=0;
        for(ll k=0;k<c.size();k++)
        {
            ll d=count(b,b+n,c[k]);
            if(d>max)
            {
                max=d;
            }
        }
        cout<<n-max<<endl;
    }
    return 0;
}