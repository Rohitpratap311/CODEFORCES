#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision; 

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> arr(1e5+1);
        vector<pair<ll,ll>> ans;
        ll temp;
        for(ll i=0;i<n;i++) 
        { 
            cin>>temp;
            arr[temp].push_back(i); 
        }
        for(ll i=0;i<1e5+2;i++)
        {
            if(arr[i].size()==1)
            {
                ans.push_back(make_pair(i,0));
            }
            else if(arr[i].size()>1)
            {
                ll cd=arr[i][1]-arr[i][0];
                bool logic=true;
                for(ll j=1;j<arr[i].size();j++)
                {
                    if(arr[i][j]-arr[i][j-1]!=cd)
                    {
                        logic=false;
                        break;
                    }
                }
                if(logic)
                {
                    ans.push_back(make_pair(i,cd));
                }
            }
        }
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}