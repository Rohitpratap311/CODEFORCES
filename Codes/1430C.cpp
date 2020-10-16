#include<bits/stdc++.h>

using namespace std; 
#define all(c) c.begin(),c.end()
#define REP(i,a,b) for(int i=a;i<=b;++i)
#define tr(container,it) \
for(auto it=container.begin();it!=container.end();++it)
typedef long long ll ; 
typedef vector<int> vi;
#define mod 1000000007 
ll exp(ll x,ll y){
  x%=mod;
  ll res=1;
  while(y){
    if(y&1)
    res=res*x%mod;
    x=x*x%mod;
    y>>=1;
  }
  return res;
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//ios::sync_with_stdio(0);
// cin.tie(0);
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  if(n>=3){
  cout<<2<<'\n';bool flag=1;
  for(int i=n;i>=3;--i)
  {cout<<i<<" "<<i-2<<"\n";
  if(flag){
  cout<<n-1<<" "<<n-1<<'\n';
  flag=0;
  }}
  }
  else {
    cout<<2<<'\n';
    cout<<2<<" "<<1<<'\n';
  }
}
    return 0;
}
