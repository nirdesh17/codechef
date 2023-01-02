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
        string s;
        cin>>s;
        vector<ll> a;
       
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            a.push_back(i);
        }
        if(a.size()==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        ll counter=0;
        for(ll i=0;i<a.size()-1;i++)
        {
            if(a[i+1]-a[i]==1)
            counter++;
            else
            break;
        }
        if(counter==a.size()-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
    }
    return 0;
}