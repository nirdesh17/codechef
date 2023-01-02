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
        if(n<3)
        {cout<<s<<endl;
        continue;}
        // ll zero=0,one=0;
        // for(ll i=0;i<n;i++)
        // {
        //     if(s[i]=='0')
        //     zero++;
        //     else
        //     one++;
        // }
        // string g="";
        // char z='0',o='1';
        // for(ll i=0;i<zero;i++)
        // {
        //     g=g+z;
        // }
        // for(ll i=0;i<one;i++)
        // g=g+o;
        // cout<<g<<endl;
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}