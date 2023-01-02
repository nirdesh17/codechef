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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        bool ans=true;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                if(a[i]+a[i+1]<=x)
                {
                    swap(a[i],a[i+1]);
                }
                else
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
}