#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int countFreq(ll arr[], ll n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    ll MAX=0;
    for (auto x : mp)
     {  
        if(x.first+x.second-1>MAX)
        {
            MAX=x.first+x.second-1;
        }
     }
    return MAX;
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
       cout<<countFreq(a,n)<<endl;
    }
    return 0;
}