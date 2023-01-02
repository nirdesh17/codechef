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
        ll n,count=1,max=1;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                if(max<count)
                {
                    max=count;
                }
            }
            else
            {
                count=1;
            }
        }
        cout<<n-max<<endl;
    }
    return 0;
}