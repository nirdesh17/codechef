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
        ll n,counter=1;
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(ll j=0;j<n-1;j++)
        {
            if(a[j]!=a[j+1])
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}