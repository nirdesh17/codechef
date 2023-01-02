#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll increment(ll x , ll y) 
{  return (x+y); }
 
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n-1];
        for(ll i=0;i<n-1;i++)
        cin>>a[i];

        ll b[n],c[n];
        b[0]=0;
        c[0]=a[0];
        for(ll i=1;i<n;i++)
        {b[i]=b[i-1]+a[i-1];c[i]=c[i-1]+a[i-1];}
        ll counter=0;
        for(ll i=0;i<n-1;i++)
        {
            if(c[i]<b[i+1])
            {
                counter=counter+(b[i+1]-c[i]);
            }
            c[i+1]=c[i+1]+counter;
            
        }
        cout<<c[n-1]<<endl;

    }
    
    return 0;
}