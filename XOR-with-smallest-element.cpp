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
        ll n,x,y;
        cin>>n>>x>>y;
        ll b[n];
        vector<ll> a;
        for(ll i=0;i<n;i++)
        {cin>>b[i];a.push_back(b[i]);}

        priority_queue <int, vector<int>, greater<int>> g ;

        for(ll i=0;i<a.size();i++)
        g.push(a[i]);

        while(y>0)
        {
            ll min=g.top();
            if((min^x) > min)
            {
                g.pop();
                g.push(min^x);
                 y--;
            }
            else
            break;
        }

        if(y%2==0)
        {
            while(g.size())
            {
                cout<<g.top()<<" ";
                g.pop();
            }
        }
        else
        {
            ll min=g.top();
            g.pop();
            g.push(min^x);
            while(g.size())
            {
                cout<<g.top()<<" ";
                g.pop();
            }
        }

        cout<<endl;
    }
    return 0;
}