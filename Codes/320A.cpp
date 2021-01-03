#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   string s,ans="YES";
   cin>>s;
   int n=s.size();
   for(int i=0;i<n;)
   {
       int value;

       if(s[i]=='1')
       {
		   value=1;
            if(i<n-1)
            {
                if(s[i+1]=='4')
                {
                    value=2;
                    if(i<n-2)
                    {
                        if(s[i+2]=='4')
                        {
                            value=3;
                        }
                    }
                }
            }
            i=i+value;
        }
        else
        {
            ans="NO";
            break;
        }
   }
   cout<<ans;
   return 0;
}