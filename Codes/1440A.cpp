
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n,c0,c1,h,one=0,zero=0;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1') { one++; }
        else { zero++; }
    }
    ll ans=min(c1*one,one*h+c0*one)+min(c0*zero,zero*h+c1*zero);
    cout<<ans<<endl;
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