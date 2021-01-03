
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
    set<string> ans;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        string temp="";
        for(ll j=0;j<s.size();j++)
        {
            temp+=s[j];
            while(s[j+1]==s[j]&&j+1<s.size())
            {
                j++;
            }
        }
        ans.insert(temp);
    }
    cout<<ans.size();
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