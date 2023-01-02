#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	for(ll j=0;j<t;j++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int e,f;
	    if((b*c)>=d)
	    cout<<0<<" "<<b<<endl;
	    else if((d/a)<c)
	    cout<<-1<<endl;
	    else
	    {
	        e=(d-(b*c)/(a-b));
	        if(d-(b*c)%(a-b)!=0)
	        e=e+1;
	        cout<<e<<" "<<c-e<<endl;
	    }
    }
    return 0;
}