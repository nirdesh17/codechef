#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if((x>0&&y>0) && (x==y))
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