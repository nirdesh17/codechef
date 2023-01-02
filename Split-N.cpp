#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll powerOfTwo(ll n)
    {
        if(n==0) { return 0; }
        while(n != 1)
        {
            if(n%2 != 0 && n != 1){ return 0; }
            n = n/2;
        }
        return 1;
    }

ll num(ll n)
{
    ll a=1;
    while(a<n)
    {
        a=a*2;
    }
    return a/2;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(powerOfTwo(n)==1)
        cout<<0<<endl;
        else
        {
            ll counter=1;
            while(n>0)
            {
                n=n-num(n);
                if(powerOfTwo(n)==1)
                {break;}
                counter++;
            }
            cout<<counter<<endl;
        }

    }
    return 0;
}