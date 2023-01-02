#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    long long a;
    double b;
    cin>>a>>b;
    cout << fixed;
    if(a<b && a%5==0)
    {
        cout<<setprecision(2)<<b-a-0.50<<endl;
    }
    else
    {
        cout<<setprecision(2)<<b<<endl;
    }
    return 0;
}