#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

ll nozero(ll n)
{
    vector<ll> vec;
    while(n)
    {
        ll x=n%10;
        n=n/10;
        if(x!=0) { vec.push_back(x); }
    }
    ll s=vec.size();
    ll sum=0;
    for(ll i=s-1;i>=0;i--)
    {
        sum+=vec[i]*pow(10,i);
    }
    return sum;
}

void solveCP311()
{
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    if(nozero(a)+nozero(b)==nozero(c))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}