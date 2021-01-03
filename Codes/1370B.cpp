#include<bits/stdc++.h>
typedef long long ll ;
#define M 1000000007

#define PI 3.141592653589793238462643383279502884197169
using namespace std;

/*     bool comp(pair<ll,ll> a,pair<ll,ll>b ) {
    if(a.second==b.second) return a.first<b.first;
    else return a.second<b.second;
} */

 /*ll power(ll a,ll b){
     ll res=1;
     while(b>0){
         a%=M;
         if(b&1)
         res=res*a %M;
         a=a*a%M;
         b>>=1;
     }
     return res;
 }
 bool isPrime(ll n){
     for(int i=2;i<=sqrt(n);++i)
     if(n%i==0)
     return 0;
     return 1;
 }
 int cnt=0;
 vector<bool>col(8,false),diag1(8,false),diag2(8,0);

void search(int x,vector<string>s){
if(x==8){
    ++cnt;
    return;
}
for(int i=0;i<8;++i){
    if(col[i]||diag1[x+i]||diag2[7+x-i]||s[x][i]=='*') continue;
    col[i]=diag1[x+i]=diag2[7+x-i]=true;
    search(x+1,s);
    col[i]=diag1[x+i]=diag2[7+x-i]=false;
}
} */
struct pt{
    int x,y,num,val;
    bool operator<(const pt& p) const{
        if(y==p.y) return x<p.x;
        else return y<p.y;
    }
};
bool comp(pt&a,pt&b){
    if(a.x==b.x) return a.y<b.y;
    else return a.x<b.x;
}
int main()
{
        int t;
 cin>>t;
 for(int x1=0;x1<t;++x1){
int  n;
cin>>n;
vector<int>v(2*n);
for(int i=0;i<2*n;++i)
cin>>v[i];

vector<int>iodd,ieven;
for(int i=0;i<2*n;++i)
if(v[i]&1)
iodd.push_back(i+1);
else ieven.push_back(i+1);
int odd=iodd.size();
int even=ieven.size();

if(odd&1){
  for(int i=1;i<odd;i+=2)
  cout<<iodd[i]<<" "<<iodd[i+1]<<'\n';
  for(int i=1;i<even;i+=2)
  cout<<ieven[i]<<" "<<ieven[i+1]<<'\n';
}
else {
    if(odd>=2){
        for(int i=2;i<odd;i+=2)
        cout<<iodd[i]<<" "<<iodd[i+1]<<'\n';
        for(int i=0;i<even;i+=2)
        cout<<ieven[i]<<" "<<ieven[i+1]<<'\n';
    }
    else {
        for(int i=0;i<odd;i+=2)
        cout<<iodd[i]<<" "<<iodd[i+1]<<'\n';
          for(int i=2;i<even;i+=2)
        cout<<ieven[i]<<" "<<ieven[i+1]<<'\n';
    }

}

 }



    return 0;
}