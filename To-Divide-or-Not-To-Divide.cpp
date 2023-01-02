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
        ll a,b,x;
        cin>>a>>b>>x;
        if(a%b==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll c=x;
            if(c%a!=0)
            c=x+a-(x%a);
           
           for(c;!(c%a==0&&c%b!=0);c=c+a);
           cout<<c<<endl;
        }
        
    }
    return 0;
}