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
        ll s,x,y,z;
        cin>>s>>x>>y>>z;
        s=s-(x+y);
        if(s>=z)
        cout<<0<<endl;
        else
        {
            if(s+max(x,y)>=z)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }
    return 0;
}