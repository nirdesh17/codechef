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
        ll n,counter=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            counter++;
        }
        
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==1 && a[i+1]==1)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}