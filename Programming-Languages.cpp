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
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a==d && b==c)
        {
            cout<<1<<endl;
        }
        else if(a==f && b==e)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}