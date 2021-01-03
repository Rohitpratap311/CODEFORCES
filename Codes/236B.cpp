//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<bool> prime(1000001,true);
ll mod=1073741824;
void seive()
{
    prime[0]=false;
    prime[1]=false;
    for(ll i=2;i*i<=1000000;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=1000000;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
ll divisors(ll x)
{
    if(prime[x]) { return 2; }
    else
    {
        ll ans=1;
        for(ll i=sqrt(x);i>=2;i--)
        {
            ll e=0;
            if(prime[i]&&x%i==0)
            {
                while(x%i==0)
                {
                    e++;
                    x=x/i;
                }
            }
            ans=ans*(e+1);
        }
        if(prime[x]) { ans=ans*2; }
        return ans;
    }
}

void solveCP311()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            for(ll k=1;k<=c;k++)
            {
                ans=(ans+divisors(i*j*k))%mod;
            }
        }
    }
    cout<<ans%mod<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    seive();
    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}