#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,h;
        cin>>x>>h;
            if(x>=h)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}