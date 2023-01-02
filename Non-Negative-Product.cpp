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
        ll n;
        cin>>n;
        ll a[n];
        ll zero=0,minus=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            zero++;
            else if(a[i]<0)
            minus++;
        }
        if(zero>0 || minus==0)
        cout<<0<<endl;
        else
        {
            if(minus%2==0)
            cout<<0<<endl;
            else
            cout<<1<<endl;
        }
        
        
    }
    return 0;
}