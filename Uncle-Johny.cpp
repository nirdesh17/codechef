#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll k,b;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        b=a[k-1];
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            if(a[i]==b)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}