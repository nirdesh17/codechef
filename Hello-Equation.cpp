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
        ll x;
        cin>>x;
        bool yes=false;
        for(ll i=1;i<=sqrt(x);i++)
        {
            if(x!=2*i&&(x-2*i)%(2+i)==0)
            {yes=true;break;}
        }
        if(yes)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}