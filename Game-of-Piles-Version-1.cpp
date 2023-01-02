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
        ll n;
        cin>>n;
        ll a[n],sum=0,counter=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                counter++;
            }
            sum=sum+a[i];
        }
        sum=sum-n*2;
        if(sum%2==0 && counter==0)
        cout<<"CHEFINA"<<endl;
        else
        cout<<"CHEF"<<endl;

    }
    return 0;
}