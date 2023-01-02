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
       ll n;
       cin>>n;
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       cout<<max(a,max(b,max(c,d)))<<endl;
    }
    return 0;
}