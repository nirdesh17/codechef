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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(ll j=0;j<n;j++)
        {
            if(a[j]<=k)
            {
                cout<<"1";
                k-=a[j];
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}