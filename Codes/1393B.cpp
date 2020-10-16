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
int n;
cin>>n;
vi v(n);
REP(i,0,n-1) cin>>v[i];
vi cnt1(100001),cnt2(100001);
REP(i,0,n-1){
  cnt1[v[i]]++;
  cnt2[v[i]]++;
}
int sum1=0,sum2=0;
REP(i,1,100000){
  sum1+=cnt1[i]/4;
  sum2+=cnt2[i]/2;
}
int q;
cin>>q;
while(q--){
  char ch;
  cin>>ch;
  int x;
  cin>>x;
  if(ch=='+'){
    sum1-=cnt1[x]/4;
    sum2-=cnt2[x]/2;
    cnt1[x]++;cnt2[x]++;
    sum1+=cnt1[x]/4;
    sum2+=cnt2[x]/2;


  }
  else {
      sum1-=cnt1[x]/4;
    sum2-=cnt2[x]/2;
    cnt1[x]--;cnt2[x]--;
    sum1+=cnt1[x]/4;
    sum2+=cnt2[x]/2;


  }
  if(sum1>=1&&sum2>=4){
    cout<<"YES\n";
  }
  else cout<<"no\n";
}
    return 0;
}