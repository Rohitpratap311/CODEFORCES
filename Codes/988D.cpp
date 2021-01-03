#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool cmp(string a,string b)
{
	return a.size()<b.size();
}

void solveCP311()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=1e9;
    bool f=false;
    for(ll i=n-1;i>0;i--)
    {
        ll a=s[i]-'0';
        for(ll j=i-1;j>=0;j--)
        {
            ll b=s[j]-'0';
            ll moves=1e9;
            if(a==0&&b==5)
            {
                moves=min(moves,n+n-1-(i+1+j+1));
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==5&&b==2)
            {
                moves=min(moves,n+n-1-(i+1+j+1));
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==0&&b==0)
            {
                moves=min(moves,n+n-1-(i+1+j+1));
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==5&&b==7)
            {
                moves=min(moves,n+n-1-(i+1+j+1));
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            swap(a,b);
            if(a==0&&b==5)
            {
                moves=min(moves,n+n-1-(i+1+j+1))+1;
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==5&&b==2)
            {
                moves=min(moves,n+n-1-(i+1+j+1))+1;
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==0&&b==0)
            {
                moves=min(moves,n+n-1-(i+1+j+1));
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            if(a==5&&b==7)
            {
                moves=min(moves,n+n-1-(i+1+j+1))+1;
                if(j==0&&s[j+1]=='0'&&!(i==1&&j==0))
                {
                    ll x=j+1;
                    while(x<n&&s[x]=='0')
                    {
                        moves++;
                        x++;
                    }
                }
            }
            //cout<<a<<" "<<b<<" "<<moves<<endl;
            ans=min(ans,moves);
            a=s[i]-'0';
        }
    }
    if(ans==1e9)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}