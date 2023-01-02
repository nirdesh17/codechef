#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long int

int findGCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
  
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll counter=0;
        int b=findGCD(a,n);
            if(b>1)
            {
                counter=n;
            }
            else
            {
                for(ll i=0;i<n;i++)
                {
                    b=findGCD(a,n);
                    a[i]=a[i]+1;
                    if(findGCD(a,n)!=b)
                    counter++;

                    a[i]=a[i]-1;
                }
            }
        
        cout<<counter<<endl;
    }
    
    return 0;
}