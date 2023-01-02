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
        string s;
        cin>>s;
        vector<char> a;
        ll minus=0,plus=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]!='+'&&s[i]!='-')
            {a.push_back(s[i]);}
            else if(s[i]=='-')
            minus++;
            else
            plus++;
        }
         sort(a.begin(),a.end(),greater<char>());
        string g="";
        g=g+a[a.size()-1];
        a.pop_back();
        for(ll i=1;i<n;i++)
        {
            if(minus>0)
            {
                g=g+"-";
                minus--;
                g=g+a[a.size()-1];
                a.pop_back();
                i++;
            }
            else if(plus>0)
            {
                g=g+"+";
                plus--;
                g=g+a[a.size()-1];
                a.pop_back();
                i++;
            }
            else
            {g=g+a[a.size()-1];a.pop_back();}
        }
        reverse(g.begin(),g.end());
        cout<<g<<endl;
    }
    return 0;
}