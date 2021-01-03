
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    bool f=false;
    ll a=k-1;
    if(n-a>0&&(n-a)%2!=0)
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<k-1;i++)
        {
            cout<<1<<" ";
        }
        cout<<n-a<<endl;
        f=true;
    }
    ll b=2*(k-1);
    if(!f&&(n-b)>0&&(n-b)%2==0)
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<k-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<n-b<<endl;
        f=true;
    }
    if(!f)
    {
        cout<<"NO"<<endl;
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