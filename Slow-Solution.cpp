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
        cin>>a>>b>>c;
        for(ll i=0;i<a;i++)
        {
            if(c>=b)
            {
                c=c-b;
                d=i;
            }
            else
            {
                break;
                d=i;
            }
        }
        if(c>=b || d+1==a)
        c=0;
       
        ll sum=0;
        for(ll i=0;i<d+1;i++)
        {   
            sum=sum+(b*b);
        }
        cout<<sum+(c*c)<<endl;        
    }
    return 0;
}