#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double x,y;
        cin>>x>>y;
        if((x*107)/100>=y)
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