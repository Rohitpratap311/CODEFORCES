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
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=a.size()-2;
    ll y=b.size()-2;
    ll w=c.size()-2;
    ll z=d.size()-2;
    //cout<<x<<" "<<y<<" "<<" "<<w<<" "<<z<<endl;
    bool fa=0,fb=0,fc=0,fd=0;
    if(2*x<=y&&2*x<=w&&2*x<=z || (x>=2*y&&x>=2*w&&x>=2*z))
    {
        fa=1;
    }
    if(2*y<=x&&2*y<=w&&2*y<=z || y>=2*x&&y>=2*w&&y>=2*z)
    {
        fb=1;
    }
    if(2*z<=y&&2*z<=w&&2*z<=x || z>=2*y&&z>=2*w&&z>=2*x)
    {
        fd=1;
    }
    if(2*w<=y&&2*w<=z&&2*w<=x || w>=2*y&&w>=2*z&&w>=2*x)
    {
        fc=1;
    }
    if(fa&&!fb&&!fd&&!fc) { cout<<'A'; }
    else if(!fa&&fb&&!fd&&!fc) { cout<<'B'; }
    else if(!fa&&!fb&&fd&&!fc) { cout<<'D'; }
    else { cout<<'C'; }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    //seive();
    //NcR();
    while(t--)
    {
        solveCP311();
    }
    return 0;
}