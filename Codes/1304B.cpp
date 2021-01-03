#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool pal(string a)
{
    ll len=a.size();
    ll x=len/2;
    if(len%2==0)
    {
        x++;
    }
    for(ll i=0,j=len-1;i<x;i++,j--)
    {
        if(a[i]!=a[j])
        {
            return false;
        }
    }
    return true;
}

bool good(string a,string b)
{
    ll len=a.size();
    for(ll i=0,j=len-1;i<len&&j>=0;i++,j--)
    {
        if(a[i]!=b[j])
        {
            return false;
        }
    }
    return true;
}

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    string vec[n];
    bool arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i];
        arr[i]=true;
    }
    ll ans=0;
    string ans2="";
    for(ll i=0;i<n;i++)
    {
        string temp=vec[i];
        if(arr[i])
        {
            for(ll j=i+1;j<n;j++)
            {
                string temp2=vec[j];
                if(good(temp,temp2)&&arr[j])
                {
                    ans+=2*m;
                    arr[i]=false;
                    arr[j]=false;
                    ans2=temp+ans2+temp2;
                }
            }
        }
    }
    bool f=false;
    string z;
    for(ll i=0;i<n&&f==false;i++)
    {
        if(pal(vec[i])&&arr[i])
        {
            arr[i]=false;
            z=vec[i];
            f=true;
        }
    }
    if(f)
    {
        cout<<ans+m<<endl;
        for(ll i=0;i<ans/2;i++)
        {
            cout<<ans2[i];
        }
        cout<<z;
        for(ll i=(ans/2)+1;i<ans;i++)
        {
            cout<<ans2[i];
        }
    }
    else
    {
        cout<<ans<<endl<<ans2;
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