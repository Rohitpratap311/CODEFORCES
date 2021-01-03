
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> a,b;
    ll x=n;
    while(x)
    {
        a.push_back(x%10);
        x=x/10;
    }
    for(ll i=0;i<a.size();i++)
    {
        ll temp=a[i];
        if(temp!=0)
        {
            b.push_back(a[i]*pow(10,i));
        }
    }
    cout<<b.size()<<endl;
    for(auto c:b)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}