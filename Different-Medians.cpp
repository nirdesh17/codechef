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
        ll a;
        cin>>a;
        if(a%2==0)
        {
        for(ll i=a/2+1;i<=a;i++)
        cout<<i<<" ";
        for(ll i=1;i<a/2;i++)
        cout<<i<<" ";
        cout<<a/2<<endl;}
        else
        {
        for(ll i=a/2+2;i<=a;i++)
        cout<<i<<" ";
        for(ll i=1;i<=a/2;i++)
        cout<<i<<" ";
        cout<<a/2+1<<endl;}
        // cout<<endl;
    }
    return 0;
}