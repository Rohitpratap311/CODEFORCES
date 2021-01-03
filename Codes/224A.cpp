#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   ll a,b,c;
   cin>>a>>b>>c;
   cout<<4*(sqrt((a*c)/b)+sqrt((a*b)/c)+sqrt((b*c)/a));
   return 0;
}