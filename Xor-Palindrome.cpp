#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll b,counter=0;
        cin>>b;
        string a;
        cin>>a;
        for(ll j=0;j<b/2;j++)
        {
            if(a[j]!=a[b-j-1])
            {
                counter++;
            }
        }
        cout<<(counter+1)/2<<endl;
    }
    return 0;
}