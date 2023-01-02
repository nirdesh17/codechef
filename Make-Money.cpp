#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,c;
	    cin>>n>>x>>c;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(x-a[i]>c)
	        {
	            count++;
	            a[i]=x;
	        }
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	    }
	    cout<<sum-(count*c)<<endl;
	    
	    
	}
	return 0;
}
