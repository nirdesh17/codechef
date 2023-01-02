#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int m,M;
        m=min(a,b);
        M=max(a,b);
        bool yes=false;
        while(m<M)
        {
            m*=2;
            if(m==M)
            yes=true;
        }
        if(yes || a==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}