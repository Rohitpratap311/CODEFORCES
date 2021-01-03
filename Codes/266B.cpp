#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t!=0)
    {
        t--;
        for(int i=0;i<n-1;)
        {
            if((s[i]=='B')&&(s[i+1]=='G'))
            {

                s[i]='G';
                s[i+1]='B';
                i=i+2;
            }
            else
            {
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}