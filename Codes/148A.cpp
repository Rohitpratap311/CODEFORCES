#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{   
    int l,m,n,k,d,ans=0;
    cin>>l>>m>>n>>k>>d;
    
    for(int i=1;i<=d;i++)
    {
        if(!(i%l==0||i%m==0||i%n==0||i%k==0))
        {
            ans++;
        }
        
    }
    cout<<d-ans;
    
}