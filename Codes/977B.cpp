
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    string arr;
    cin>>arr;
    set<string> myset;
    for(ll i=0;i<n-1;i++)
    {
        myset.insert(arr.substr(i,2));
    }
    ll ans=-1;
    string ans2="";
    for(auto ch: myset)
    {
        ll count=0;
        for(ll i=0;i<n-1;i++)
        {
            if(ch==arr.substr(i,2))
            {
                count++;
            }
        }
        if(count>ans)
        {
            ans=count;
            ans2=ch;
        }
    }
    cout<<ans2;
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