#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

//#pragma GCC optimize ("-O3")

using ll = long long;
using ld = long double;
const ll mod = 1000000007;
const ll INF = 1000000000000000000;
const ld PI = 3.141592653589793;
 

#define loop(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define printA(a) loop(i,0,a.size()) cout<<a[i]<<" ";

bool ifprime(ll n)
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

ll nCr[1001][1001];
void NcR() 
{
    loop(i,0,1001) 
    {
        loop(j,0,1001) 
        {
            nCr[i][j] = 0;
        }
        nCr[i][0] = 1; 
    }
    loop(i,1,1001) 
    {
        loop(j,1,i+1) 
        {
            nCr[i][j]=(nCr[i-1][j]+nCr[i-1][j-1])%mod;
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
    ll n,k;
    cin>>n>>k;
    ll ans=n;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i<=k) { ans=min(ans,n/i); }
            if(n/i<=k) { ans=min(ans,i); }
        }
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    //seive();
    //NcR();
    while(t--)
    {
        solveCP311();
    }
    return 0;
}