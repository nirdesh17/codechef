#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,q;
	    cin>>n>>q;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    while(q--)
	    {
	        ll e[n];
	       
	        ll b,c;
	        cin>>b>>c;
	        a[b-1]=c;
	        
	         for(ll i=0;i<n;i++)
	        e[i]=a[i];
	        
	        ll num=0;
	        for(ll i=0;i<n-1;i++)
	        {
	            if(e[i]>e[i+1])
	            {
	                num++;
	                
	               for(ll j=i+1;j<n;j++)
                    e[j]=e[j]+j;

                    i--;
	            }
	        }
	        cout<<num<<endl;
	    }
	}
	return 0;
}
