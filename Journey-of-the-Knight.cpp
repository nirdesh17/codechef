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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a+b)%2==0 && (c+d)%2==0)  || ((a+b)%2!=0 && (c+d)%2!=0))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}