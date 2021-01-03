
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll> prime(1000001,1);
void seive()
{
    prime[0]=0;
    prime[1]=0;
    for(ll i=2;i*i<=1000000;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=1000000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

void solveCP311()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll val;
        cin>>val;
        ll temp=sqrt(val);
        if(prime[temp]&&temp*temp==val)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
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