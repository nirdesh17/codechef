#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll loop(ll d,ll e,ll f=0)
{
    while(d<=e)
    {
        d=d*2;
        f++;
    }

    return f-1;
}
ll loop_1(ll d,ll e)
{
    while(d<=e)
    {
        d=d*2;
    }

    return d/2;
}

ll ans(ll a,ll b, ll c=0)
{
    while(a!=1 && b!=2)
    {
        c=loop(a,b,0);
        a=loop_1(a,b);
        a=1;
        b=b-a;
        c=c+a;
    }
    return c+3;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<x<<endl;
        }
         else if(x==1 && y==2)
        {
            cout<<3<<endl;
        }
        else if(x<0 && y<0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans(x,y,0)<<endl;
        }
    }
    return 0;
}