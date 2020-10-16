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
//cin.tie(0);
int t;
cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  vi a(n);
  REP(i,0,n-1) cin>>a[i];
  vi b(m);
  REP(i,0,m-1) cin>>b[i];
  ll sz=0;
  map<int,bool>mp;
  int j=0;ll ans=0;
  for(int i=0;i<m;++i){
   if(mp[b[i]]){
        ans+=1;
        --sz;
      }
      else {
      while(a[j]!=b[i]){
        mp[a[j]]=1;
        ++sz;
        ++j;
        
      }
      mp[b[i]]=1;
      ans+=2*sz+1;
      
      ++j;
      }
    
  }
cout<<ans<<'\n';
}
    return 0;
}