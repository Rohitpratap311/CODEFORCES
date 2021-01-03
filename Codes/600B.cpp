
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++) { cin>>a[i]; }
    for(ll i=0;i<m;i++) { cin>>b[i]; }
    sort(a,a+n);
    for(ll i=0;i<m;i++)
    {
        ll x=b[i];
        ll l=0,r=n-1;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            if(a[m]<=x) { l=m+1; }
            else { r=m-1; }
        }
        cout<<l<<" ";
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