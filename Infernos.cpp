#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int c[a];
        for(int j=0;j<a;j++)
        {
            cin>>c[i];
        }
        int d=*max_element(c, c + a);
        if(a>d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}