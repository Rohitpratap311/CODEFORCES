#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    ll sum=(n*(n+1))/2;
    if(m>=sum)
    {
        ll x=m/sum;
        m=m-(x*sum);
    }
    for(ll i=1;i<=n;i++)
    {
        if(m>=i)
        {
            m=m-i;
        }
        else
        {
            break;
        }
    }
    cout<<m;
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