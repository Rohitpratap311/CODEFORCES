//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

bool isprime(ll n)
{
    if(n==2||n==3) { return true ; }
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) { return false; }
    }
    return true;
}

vector<ll> prime(1000001,1);
void seive()
{
    prime[0]=0;
    prime[1]=0;
    for(ll i=2;i*i<=1000000;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=1000000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}


ll gcd(ll a,ll b)
{
    if(b==0) { return a; }
    return gcd(b,a%b);
}
 
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

void solveCP311()
{
    ll n;
    cin>>n;
    
    
    vector<ll> p;
map<ll,ll>mp;
for(ll i=1;i*i<=n;++i){
  if(n%i==0){
    if(i!=1&&isprime(i))
    p.push_back(i);
    if(i*i!=n&&isprime(n/i)) p.push_back(n/i);
  }
}
  for(int i=0;i<p.size();++i){
    while(n%p[i]==0){
      n/=p[i];
      mp[p[i]]++;
    }
  }
 vector<ll> ans;
 ll mx=0;ll f=0;
 for(auto c:mp){
   if(c.second>mx){
     mx=c.second;
     f=c.first;
   }
 }
 for(int i=1;i<=mx;++i)
 ans.push_back(f);
 mp[f]=0;
 cout<<mx<<"\n";

for(auto c:mp){
  for(ll i=0;i<c.second;++i)
  ans[i]*=c.first;
}

reverse(ans.begin(),ans.end());
for(auto c:ans) cout<<c<<" ";
  cout<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    seive();
    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}