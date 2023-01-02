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
        int n,m;
        cin>>n>>m;
        string s,a;
        cin>>s;
        cin>>a;
        vector<ll> c;
        for(ll i=0;i<m;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(a[i]==s[j])
                {
                    c.push_back(j);
                    break;
                }
            }
        }
        vector<ll> d;
        for(ll j=0;j<c.size();j++)
        {
            d.push_back(c[j]);    
        }
        ll counter=0;
        sort(c.begin(),c.end());
        for(ll j=0;j<m;j++)
        {
            if(d[j]==c[j])
            counter++;    
        }
        if(counter==m)
        {
            cout<<-1<<endl;
        }
        else
        {
            string e="abcde";
            vector<char> f;
            ll counter2=0;
            for(ll j=0;j<5;j++)
            {
                for(ll i=0;i<m;i++)
                {
                    if(e[j]!=a[i])
                    {
                       counter2++;
                    }
                    else
                    counter2=0;
                }
                if(counter2>1)
                {
                    f.push_back(e[j]);
                }
                            
            }
            for(ll j=0;j<n;j++)
            {
                if(s[j]=='?')
                {
                    s[j]=f[0];
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}