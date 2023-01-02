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
        ll a,b;
        cin>>a>>b;
        double c=(double)a/(double)6;
        cout<<ceil(c)*b<<endl;
    }
    return 0;
}