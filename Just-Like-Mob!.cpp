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
        ll n,m,k,x;
        cin>>n>>m>>k>>x;
       
        ll a=(n*k)+m;
        ll sum=x%a;
        ll b=n*(k-1);
        if(sum==0)
        cout<<"YES"<<endl;
        else if(sum-b>0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    
    return 0;
}