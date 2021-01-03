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
       ll ans=0;
       cin>>s;
       bool a=true,b=false,c=false,d=false,e=false;
       for(ll i=0;i<s.size();i++)
       {
           if(a&&s[i]=='h') { b=true; ans++; a=false;  }
           else if(b&&s[i]=='e') { c=true; ans++; b=false; }
           else if(c&&s[i]=='l') { d=true; ans++; c=false; }
           else if(d&&s[i]=='l') { e=true; ans++; d=false; }
           else if(e&&s[i]=='o') { ans++; break; }
       }
       if(ans==5) { cout<<"YES"; }
       else { cout<<"NO"; }
        
    }
    return 0;
}