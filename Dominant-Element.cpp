#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int x[a];
	    for(int i=0;i<a;i++)
	    {
	        cin>>x[i];
	    }
	    sort(x,x+a);
	    int max=1,counter=1;
	    bool yes=false;
	    for(int i=0;i<a-1;i++)
	    {
	        if(x[i]==x[i+1])
	        {
	            max++;
	            if(max>counter)
	            {
	                counter=max;
	                yes=true;
	            }
	            else if(max==counter)
	            {
	                yes=false;
	            }
	        }
	        else
	        {
	            max=1;
	        }
	    }
	    if(yes)
	    cout<<"YES"<<endl;
        else if(a==1)
        cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
    return 0;
}