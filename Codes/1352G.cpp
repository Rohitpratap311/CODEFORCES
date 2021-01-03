
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
    if(n==2||n==3)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll odd;
        ll ans[n];
        ll x=0;
        if(n%2==0) 
        { 
            odd=n-1; 
        }
        else
        {
            odd=n;
        }
        for(ll i=odd;i<=n&&x<n&&i>0;i-=2)
        {
            ans[x]=i;
            x++;
        }
        ans[x]=4;
        x++;
        ans[x]=2;
        x++;
        for(ll i=6;i<=n&&x<n;i+=2)
        {
            ans[x]=i;
            x++;
        }
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
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