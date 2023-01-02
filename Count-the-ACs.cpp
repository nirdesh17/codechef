#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,c;
        cin>>a;
        b=a/100;
        c=a%100;
        if(b+c<11)
        {
            cout<<b+c<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }        
    }
    return 0;
}