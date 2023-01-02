#include <bits/stdc++.h>
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
	    string s;
	    cin>>s;
	    if(n%2!=0)
	    cout<<"NO"<<endl;
	    else
	    {
	        sort(s.begin(),s.end());
	        ll a=1;
	        bool yes=true;
	        for(ll i=0;i<s.length()-1;i++)
	        {
	            if(s[i]==s[i+1])
	            a++;
	            else
	            {
	                if(a%2!=0)
	                { 
	                    yes=false;
	                    break;
	                }
	                a=1;
	            }
	        }
	        if(yes)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        
	    }
	}
	return 0;
}
