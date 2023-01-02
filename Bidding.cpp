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
        ll a,b,c;
        cin>>a>>b>>c;
        if(max(a,max(b,c))==a)
        cout<<"Alice"<<endl;
        else if(max(a,max(b,c))==b)
        cout<<"Bob"<<endl;
        else
        cout<<"Charlie"<<endl;
    }
    return 0;
}