
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++) { cin>>vec[i]; }
    ll ans=-1;
    ll one=0,two=0;
    bool flag1=false,flag2=false;
    for(ll i=0;i<n;i++)
    {
        if(vec[i]==1)
        {
            if(flag1)
            {
                one++;
            }
            else
            {
                one=1;
                flag1=true;
                flag2=false;
            }
        }
        else
        {
            if(flag2)
            {
                two++;
            }
            else
            {
                two=1;
                flag2=true;
                flag1=false;
            }
        }
        ll temp=2*min(one,two);
        ans=max(temp,ans);
    }
    cout<<ans<<endl;
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