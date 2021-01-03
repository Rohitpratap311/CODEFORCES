
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
    ll x=n/2;
    ll val=((x*x)+1)/2;
    ll a=4*val;
    ll b=(n*n)-a;
    if(a>b)
    {
        cout<<"Alice"<<endl;
    }
    else if(b>a)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }
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