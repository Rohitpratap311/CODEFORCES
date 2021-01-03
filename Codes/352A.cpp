#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
    int n;
    cin>>n;
    int temp,five=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==0)  { zero++; }
        else { five++; }

    }
    if(zero==0) cout<<"-1";
    else if(five<9) cout<<'0';
    else
    {
        int x=five/9;
        for(int i=0;i<x*9;i++)
        {
            cout<<'5';
        }
        for(int i=0;i<zero;i++)
        {
            cout<<'0';
        }
    }
    return 0;
}