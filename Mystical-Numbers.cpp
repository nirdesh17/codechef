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
        ll N;
        cin>>N;
        ll a[N];
        for(ll j=0;j<N;j++)
        {
            cin>>a[j];
        }
        ll Q;
        cin>>Q;
        for(ll k=0;k<Q;k++)
        {
            ll L,R,X;
            cin>>L>>R>>X;
            ll count=0;
            for(int m=L-1;m<R;m++)
            {
                if((a[m]^a[X])>(a[m]&&a[X]))
                {
                  count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}