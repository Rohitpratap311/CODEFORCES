
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define mod 1000000007 
void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
vector<ll> cnt(n+1);
rep(i,0,n-1) cin>>v[i],cnt[v[i]]++;
ll ans=-2;ll M=mod;
for(int i=0;i<n;++i){
  if(cnt[v[i]]==1){
    if(M>v[i]){
      ans=i;
    }
    M=min(M,v[i]);
  }
  
}
cout<<ans+1;
  cout<<'\n';
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