#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if((double(a)/double(x))>(double(b)/double(y)))
	    cout<<"CHEFINA"<<endl;
	    else if((double(a)/double(x))<(double(b)/double(y)))
	    cout<<"CHEF"<<endl;
	    else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
