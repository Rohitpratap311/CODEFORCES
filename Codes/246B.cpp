
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        sum+=temp;
    }
    if(sum%n==0)
    {
        cout<<n;
    }
    else
    {
        cout<<n-1;
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