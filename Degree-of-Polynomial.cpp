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
       ll a[n];
       for(ll j=0;j<n;j++)
       {
           cin>>a[j];
       }
       ll b=-1;
       for(ll j=n-1;j>=0;j--)
       {
           if(a[j]!=0)
           {
               b=j;
               break;
           }
       }
       if(b!=-1)
       {
           cout<<b<<endl;
       }
       else
       {
           cout<<0<<endl;
       }
    }
    return 0;
}