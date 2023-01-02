#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    vector<ll> c,b;
	    ll max=*max_element(a, a + n);
	    ll i=0;
	    while(a[i]!=max)
	    {
	        b.push_back(a[i]);
	        i++;
	    }
	    while(i<n)
	    {
	        c.push_back(a[i]);
	        i++;
	    }
	    if(b.size()>0 && c.size()>0)
	    { 
	        cout<<b.size()<<endl;
	        for(ll j=0;j<b.size();j++)
	        cout<<b[j]<<" ";
	        cout<<endl;
	        
	        cout<<c.size()<<endl;
    	    for(ll j=0;j<c.size();j++)
    	    cout<<c[j]<<" ";
    	    cout<<endl;
	    }
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
