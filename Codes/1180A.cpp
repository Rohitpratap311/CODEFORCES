#include <iostream>

using namespace std;
typedef long long ll;
//#Rohitpratap311
int getRhombus(int n)
{
    if(n==1)
    {
        return 1;
    }
    return getRhombus(n-1)+4*(n-1);
}
int main()
{
   int n,ans;
   cin>>n;
   ans=getRhombus(n);
   cout<<ans;
   return 0;
}