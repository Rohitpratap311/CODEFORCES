#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{   
    int n;
    cin>>n;
    ld temp,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<setprecision(14)<<sum/n;
    
}