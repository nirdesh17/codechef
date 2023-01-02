#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        long int a=n*50;
        long int b=a-((a*70)/100);
        cout<<b<<endl;
    }
    return 0;
}