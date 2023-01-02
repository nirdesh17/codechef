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
        ll n,x;
        cin>>n>>x;
        if(x>=n)
        cout<<0<<endl;
        else
        {
            if((n-x)%4==0)
            cout<<(n-x)/4<<endl;
            else
            cout<<((n-x)/4)+1<<endl;
        }
    }
    return 0;
}