#include <iostream>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   ll n,ans;
   cin>>n;
   ans=ans+n/100; n=n%100;
   ans=ans+n/20;  n=n%20;
   ans=ans+n/10;  n=n%10;
   ans=ans+n/5;   n=n%5;
   ans=ans+n;
   cout<<ans;
   return 0;
}