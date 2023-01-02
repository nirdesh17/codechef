#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
  ll nCr(ll n) {
    return (n*(n-1))/2;
}
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
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll count1=1;
	    vector<ll> e;
	    for(ll i=0;i<n-1;i++)
	    {
	            if(a[i]==a[i+1])
    	        {
    	            count1++;
    	        }
    	        else
    	        {
    	            e.push_back(count1);
    	            count1=1;
    	        }
	    }
	    e.push_back(count1);
	    ll c=0;
	    
	        for(ll i=0;i<e.size();i++)
	        {
	            c=c+nCr(e[i]);
	        }
	    
	    cout<<c<<endl;
	}
    return 0;
}