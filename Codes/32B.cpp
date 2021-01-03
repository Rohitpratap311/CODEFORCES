#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{
    
    string s,ans;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;)
    {
        if(i==n-1) { ans=ans+'0'; i++;   }
        else
        {
            if((s[i]=='-')&&(s[i+1]=='.')) { ans=ans+'1'; i=i+2; }
            else if((s[i]=='-')&&s[i+1]=='-') { ans=ans+'2'; i=i+2; }
            else { ans=ans+'0'; i++; }
        }
    }
    cout<<ans;
    return 0;
}