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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=10 && b>=10 && c>=10 && a+b+c>=100)
        {
            cout<<"PASS"<<endl;
        }
        else
        cout<<"FAIL"<<endl;
    }
    return 0;
}