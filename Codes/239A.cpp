
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
void solveCP311()
{
    ll y,n,k;
    cin>>y>>k>>n;
    vector<ll> x;
    ll flag;
    if(y>=k)
    {
        ll temp=ceil((ld)y/(ld)k);
        flag=((ll)temp*k)-y;
    }
    else
    {
        flag=k-y;
    }
    for(ll i=flag;i+y<=n&&((i+y)/k<=100000);i+=flag)
    {
        //cout<<i<<endl;
        if((i+y)%k==0)
        {
            flag=k;
            if(i!=0)
                x.push_back(i);
        }
    }
    if(x.size()==0)
    {
        cout<<-1;
    }
    else
    {
        sort(x.begin(),x.end());
        for(auto i:x)
        {
            cout<<i<<" ";
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