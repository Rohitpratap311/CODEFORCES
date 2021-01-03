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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    ll pw[31];
    for(ll i=0;i<=30;i++)
    {
        pw[i]=pow(2,i);
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {

        bool flag=false;
        //cout<<arr[i]<<" "<<x<<endl;
        for(ll j=0;j<=30;j++)
        {
            if(((mp[pw[j]-arr[i]]>=2)||(mp[pw[j]-arr[i]]==1&&(pw[j]-arr[i])!=arr[i])))
            {

                flag=true;
                //cout<<pw[j]<<" "<<arr[i]<<endl;
                break;
            }
        }
        if(!flag)
        {
            ans++;
        }
    }
    cout<<ans;

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