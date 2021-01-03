#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     ll a,b,c,d;
     int count=0;
     cin>>a>>b>>c>>d;
     if(a==b||a==c||a==c||a==d) count++;
     if(b==c||b==d) count++;
     if(c==d) count++;
     cout<<count;
     return 0;
}