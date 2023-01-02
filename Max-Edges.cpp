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
        ll l,n,m;
        cin>>l>>n>>m;
        if(n+m>l)
        {
           ll a=(n+m)-l;
           if(a%2==0)
           {
                n=n-(a/2);
                m=m-(a/2);
           }
           else
           {    
                a++;
                n=n-(a/2);
                m=m-(a/2);
           }
            cout<<n*m<<endl;
        }
        else if(n+m==l)
            cout<<n*m<<endl;
        else
        {
            ll e=(l-(m+n));
            ll sum=n*(l-n);
            ll SUM=e*m;
            cout<<sum+SUM+(e*(e-1))<<endl;
        }
    }
    return 0;
}