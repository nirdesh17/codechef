#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,sum=0;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	        sum%=998244353;
	    }
	    cout<<(sum*(sum-1))%998244353<<endl;
	}
	return 0;
}
