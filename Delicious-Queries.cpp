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
        ll n;
        cin>>n;
        ll a[n],d[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            d[i]=a[i];
        }
        sort(d,d+n);
        ll q;
        cin>>q;
        while(q--)
        {
            ll p,k;
            cin>>p>>k;
            vector<int> b;
            for(ll i=0;i<n;i++)
            {
                if(d[i]%p==0)
                 b.push_back(d[i]);
            }
            ll c[n];
            ll sum=0;
            for(ll i=0;i<k;i++)
            {
                if(a[i]%p==0 )
                {
                    c[i]=b[b.size()-1];
                    if(b.size()>0)
                    b.pop_back();
                }
                else
                c[i]=a[i];

                sum=sum+c[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}