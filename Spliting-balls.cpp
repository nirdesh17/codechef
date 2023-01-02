#include<bits/stdc++.h>
using namespace std;
#define ll long long int

  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const unsigned int M = 1000000007;
    ll d[1000001];
    d[0]=1;d[1]=1;
    for(ll i=2;i<=1000000;i++)
    {
        d[i]=((d[i-1]*i)%M)%M;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            ll s=d[a[i]]%M;
            sum=sum+s;
            sum%=M;
        }
        cout<<sum%M<<endl;
    }
    return 0;
}