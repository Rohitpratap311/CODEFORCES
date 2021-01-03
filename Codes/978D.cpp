
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    ll b[n+1],a[n+1]={0};
    for(ll i=1;i<=n;i++) { cin>>b[i]; }
    if(n<=2)
    {
        cout<<"0";
        return ;
    }
    ll ans=0;
    ll final=1e10;
    bool check=false;
    for(ll d1=-1;d1<=1;d1++)
    {
        for(ll d2=-1;d2<=1;d2++)
        {
            bool flag=true;
            ans=0;
            a[1]=b[1]+d1;
            a[2]=b[2]+d2;
            ll diff=a[2]-a[1];
            ans+=abs(d1);
            ans+=abs(d2);
            for(ll i=3;i<=n;i++)
            {
                a[i]=diff+a[i-1];
                if(abs(a[i]-b[i])>1)
                {
                    flag=false;
                    break;
                }
                ans+=abs(a[i]-b[i]);
            }
            if(flag)
            {
                final=min(ans,final);
                check=true;
            }
        }
    }
    if(check)
        cout<<final;
    else
        cout<<"-1";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}