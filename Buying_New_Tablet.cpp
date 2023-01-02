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
        ll n,b,max=0;
        cin>>n>>b;
        for(ll j=0;j<n;j++)
        {
            ll w,h,p,area=0;
            cin>>w>>h>>p;
            if(p<=b)
            {
                area=w*h;
            }
            if(area>=max)
            {
                max=area;
            }
        }
        if(max==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<max<<endl;
        }

    }
    return 0;
}