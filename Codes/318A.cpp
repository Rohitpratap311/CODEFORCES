#include<bits/stdc++.h>

using namespace std;
typedef long long ll; 
//#Rohitpratap311

int main()
{
    ll n,k;
    cin>>n>>k;
    ll even=n/2;
    ll odd=n-even;
    if(k<=odd)
    {
        cout<<2*k-1;
    }
    else
    {
        cout<<2*(k-odd);
    }
    return 0;
}