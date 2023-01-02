#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
        ll r1,r2,r3;
        cin>>r1>>r2>>r3;
        if(r1>r2+r3)
        cout<<"YES"<<endl;
        else if(r2>r1+r3)
        cout<<"YES"<<endl;
        else if(r3>r1+r2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}