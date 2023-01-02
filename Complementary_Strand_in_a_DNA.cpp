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
        for(ll i=0;i<n;i++)
        {
            switch (s[i])
            {
            case 'A':
                cout<<"T";
                break;
            case 'T':
                cout<<"A";
                break;
            case 'C':
                cout<<"G";
                break;
            case 'G':
                cout<<"C";
                break;        
            default:
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}