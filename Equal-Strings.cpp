#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        string a,b,c=" ";
        cin>>a>>b;
        for(ll j=0;j<n;j++)
        {
            if(a[j]!=b[j])
            {
                c=c+b[j];
            }
        }
        ll ans=0;
        sort(c.begin(), c.end());
        for(ll j=1;j<c.size();j++)
        {
            if(c[j]!=c[j+1])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}