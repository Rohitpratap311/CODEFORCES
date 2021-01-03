#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

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
    string s;
    cin>>s;
    ll a=0,b=0,d=0;
    for(ll i=0;i<s.size();i++)
    {
        ll n=(int)s[i]-48;
		if (!(n%3&&(n+a)%3&&(n+a+b)%3)) d++,a=b=0;
		else b=a,a=n;
    }
    cout<<d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();   
    }
    return 0;
}