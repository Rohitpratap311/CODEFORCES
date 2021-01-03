#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

int main()
{
    ll n;
    cin>>n;
    ll sum=(n*(n+1)/2);
    if(sum%2==0)
    {
        cout<<'0'<<endl;
        vector<ll> vec;
        ll z=sum/2;
        ll x=n;
        while(z>0)
        {
            vec.push_back(x);
            z=z-x;
            x=min(z,x-1);

        }
        cout<<vec.size()<<' ';
        for(auto i:vec)
        {
            cout<<i<<' ';
        }
    }
    else
    {
        cout<<"1"<<endl;
        vector<ll> vec;
        ll z=(sum+1)/2;
        ll x=n;
        while(z>0)
        {
            vec.push_back(x);
            z=z-x;
            x=min(z,x-1);
        }
                cout<<vec.size()<<' ';
        for(auto i:vec)
        {
            cout<<i<<' ';
        }
    }
    return 0;
}