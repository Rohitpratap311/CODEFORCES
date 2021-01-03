//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=i;j<=n;j++)
        {
            ll temp=i*i+j*j;
            ll temp2=sqrt(temp);
            if((temp2*temp2==temp)&&temp2<=n)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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