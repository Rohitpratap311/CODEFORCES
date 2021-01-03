
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll larr[n],rarr[n],lsum=0,rsum=0;
    bool flag=false;
    for(ll i=0;i<n;i++)
    {
        cin>>larr[i]>>rarr[i];
        lsum+=larr[i];
        rsum+=rarr[i];
        if((larr[i]+rarr[i])%2!=0) { flag=true; }
    }
    if(lsum%2==0&&rsum%2==0)
    {
        cout<<"0";
    }
    else
    {
        if(lsum%2!=0&&rsum%2!=0)
        {
            if(flag) { cout<<"1";}
            else { cout<<"-1"; }
        }
        else
        {
            cout<<"-1";
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