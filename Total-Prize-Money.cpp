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
        ll x,y;
        cin>>x>>y;
        cout<<x*10+y*90<<endl;
    }
    return 0;
}