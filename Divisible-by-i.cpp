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
        if(n==2)
        {
            cout<<"2 1"<<endl;
        }
        if(n%2==0)
        {
            ll j=n/2+1;
            ll a[n];
            for(ll k=1;k<n;k+=2)
            {
                a[k]=j;
                j++;
            }
            j=n/2-1;
            for(ll k=0;k<n;k+=2)
            {
                a[k]=j;
                j--;
            }
            for(ll k=0;k<n;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        else
        {
            ll j=n/2+1;
            ll a[n];
            for(ll k=0;k<n;k+=2)
            {
                a[k]=j;
                j++;
            }
            j=n/2;
            for(ll k=1;k<n;k+=2)
            {
                a[k]=j;
                j--;
            }
            for(ll k=0;k<n;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}