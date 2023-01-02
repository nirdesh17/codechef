#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++)
    {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll counter=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                counter++;
            }
        }
        if(counter==1)
        {
            cout<<a[i]<<endl;
            break;
        }
        counter=0;
    }
    }
    return 0;
}