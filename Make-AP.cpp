#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,c;
	    cin>>a>>c;
	    if((c-a)%2==0)
	    {
	        cout<<a+((c-a)/2)<<endl;
	    }
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
