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
        ll a[n],sum=0;
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
        string g= sum%2==0?"NO":"YES";
        cout<<g<<endl;
    }
    return 0;
}