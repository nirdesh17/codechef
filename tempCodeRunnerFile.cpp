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
            while((n+m>l))
            {
                n--;m--;
            }
            cout<<n*m<<endl;
        }
        else if(n+m==l)
            cout<<n*m<<endl;
        else
        {
            ll sum=n*(l-n);
            ll SUM=(l-(m+n))*m;
            cout<<sum+SUM<<endl;
        }
    }
    return 0;
}