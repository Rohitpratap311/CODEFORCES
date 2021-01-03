#include <bits/stdc++.h>

using namespace std;
//#Rohitpratap311

bool notUnique(int x)
{
    int a=x%10;
    x=x/10;
    int b=x%10;
    x=x/10;
    if(b==a) return true;
    int c=x%10;
    x=x/10;
    if((c==a)||(c==b)) return true;
    int d=x%10;
    if((d==a)||(d==b)||(d==c)) return true;
    return false;
}

int main()
{
   int n;
   cin>>n;
   int ans=n+1;
   while(notUnique(ans))
   {
       ans++;
   }
   cout<<ans;
   return 0;
}