#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int counter=0;
        int a=x;
        while(x+y<=z)
        {
            x=x+a;
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}