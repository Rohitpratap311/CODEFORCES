#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   string s,t;
   cin>>s>>t;
   reverse(s.begin(),s.end());
   if(s==t) { cout<<"YES"; }
   else { cout<<"NO"; }
   return 0;
}
