
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,a=0,b=0,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        if(temp==100) { a++; } else { b++; }
        sum+=temp;
    }
    ll temp=sum/2;
    if(temp%100!=0)
    {
        cout<<"NO";
    }
    else
    {
        ll x=0;
        for(ll i=0;i<b;i++)
        {
            if(x+200<=temp)
            {
                x+=200;
            }
            else
            {
                break;
            }
        }
        ll temp2=(temp-x)/100;
        if(a>=temp2)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
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