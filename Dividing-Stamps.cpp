#include<bits/stdc++.h>
using namespace std;
#define ll long long int


  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    ll b[n];
    ll c=0;
    for(ll j=0;j<n;j++)
    {
        cin>>b[j];
        c=c+b[j];
    }
    if(c==sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}