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
        string s;
        cin>>s;
        ll arr[26]={0};
        for(ll i=0;i<s.size();i++) { arr[s[i]-'a']++; }
        ll even=0,odd=0;
        for(ll i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                if(arr[i]%2==0) even++;
                else odd++;
            }
        }
        if(odd==0||odd==1)
        {
            cout<<"First"; return 0;
        }
        if(odd%2==0) { cout<<"Second"; return 0; }
        cout<<"First";
    }
    return 0;
}