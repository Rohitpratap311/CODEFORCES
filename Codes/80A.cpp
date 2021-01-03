#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

bool isPrime(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)  return false;
    }
    return true;
}

int nextPrime(int n,int m)
{
    for(int i=n+1;i<=m;i++)
    {
        if(isPrime(i))
        {
            return i;
        }
    }
    return m+1;
}


int main()
{
   int n,m;
   cin>>n>>m;
   int x=nextPrime(n,m);
   if(x==m)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }


}