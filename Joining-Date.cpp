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
        ll counter=0;
        ll b=1;
        for(ll j=0;j<n;j++)
        {
            if(counter==5)
            {
                b++;
            }
            a[i]=b;
            counter++;
        }
        ll c[n];
        for(ll j=0;j<n;j++)
        {
            if(j==k)
            {
                c[j]=0;
            }
            else if(j>k)
            {
                c[j]=a[j]+1;
            }
            else
            {
                c[j]=a[j];
            }
        }
        ll count=0;
        for(ll j=5;j<n;j+=5)
        {
            if(c[j]!=a[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}