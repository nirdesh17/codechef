#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll power(ll n)
{
    ll count=0;
    while(n>1)
    {
        n=n/2;
        count++;
    }
    return count;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=power(a);
        cout<<(d*b)+((d-1)*c)<<endl;
    }
    
    return 0;
}