
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll temp;
    ll odd=0,even=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
        if(temp%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(n==1)
    {
        cout<<1;
    }
    else if(sum%2==0)
    {
        cout<<even;
    }
    else
    {
        cout<<odd;
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