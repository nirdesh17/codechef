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
        ll a;
        cin>>a;
        string s;
        cin>>s;
        for(ll j=0;j<a/2;j++)
        {
            if(s[2*j]=='0' && s[2*j+1]=='0')
            {
                cout<<"A";
            }
            else if(s[2*j]=='0' && s[2*j+1]=='1')
            {
                cout<<"T";
            }
            else if(s[2*j]=='1' && s[2*j+1]=='0')
            {
                cout<<"C";
            }
            else if(s[2*j]=='1' && s[2*j+1]=='1')
            {
                cout<<"G";
            }
        }
        cout<<endl;
        
    }
    return 0;
}