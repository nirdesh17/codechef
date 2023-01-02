#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c,d,counter=0;
    cin>>a>>b>>c>>d;
    if(a>=10)
    {
        counter++;
    }
     if(b>=10)
    {
        counter++;
    }
     if(c>=10)
    {
        counter++;
    }
     if(d>=10)
    {
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}