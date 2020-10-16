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
int n,q;
cin>>n>>q;
int arr[2][n];
memset(arr,0,sizeof(arr));
int prev=0;
for(int i=0;i<q;++i){
  int r,c;
  cin>>r>>c;
  --r;--c;
  if(!arr[r][c]){
    if(r-1>=0&&c-1>=0&&arr[r-1][c-1]){
      ++prev;
    }
    if(r-1>=0&&c+1<n&&arr[r-1][c+1]) ++prev;

    if(r+1<2&&c-1>=0&&arr[r+1][c-1]) ++prev;
    if(r+1<2&&c+1<n&&arr[r+1][c+1]) ++prev;
    if(r+1<2&&arr[r+1][c]) ++prev;
    if(r-1>=0&&arr[r-1][c]) ++prev;
      
  
    
    
  }
  else {
     if(r-1>=0&&c-1>=0&&arr[r-1][c-1]){
      --prev;
    }
    if(r-1>=0&&c+1<n&&arr[r-1][c+1]) --prev;

    if(r+1<2&&c-1>=0&&arr[r+1][c-1]) --prev;
    if(r+1<2&&c+1<n&&arr[r+1][c+1]) --prev;
    if(r+1<2&&arr[r+1][c]) --prev;
    if(r-1>=0&&arr[r-1][c]) --prev;
      
     

  } arr[r][c]=!arr[r][c];
  
  if(prev>0) cout<<"NO\n";
  else cout<<"YES\n";
 



}
    return 0;
}