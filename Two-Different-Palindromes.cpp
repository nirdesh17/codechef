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
        ll a,b;
        cin>>a>>b;
        
            if((a%2!=0 && b%2!=0)|| (a==1 || b==1))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        
    }
    return 0;
}