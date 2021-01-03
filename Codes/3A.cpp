
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    string s1,s2;
    cin>>s1>>s2;
    int x1=s1[0]-'a'+1;
    int y1=s1[1]-48;
    int x2=s2[0]-'a'+1;
    int y2=s2[1]-48;
    ll r=0,l=0,u=0,d=0;
    ll count=0;
    vector<string> vec;
    if(x1<x2)
    {
        r=x2-x1;
        if(y1>y2)
        {
            d=y1-y2;
            while(r>0&&d>0)
            {
                vec.push_back("RD");
                r--;
                d--;
                count++;
            }
            while(r>0)
            {
                vec.push_back("R");
                r--;
                count++;
            }
            while(d>0)
            {
                vec.push_back("D");
                d--;
                count++;
            }
        }
        else
        {
            u=y2-y1;
            while(r>0&&u>0)
            {
                vec.push_back("RU");
                r--;
                u--;
                count++;
            }
            while(r>0)
            {
                vec.push_back("R");
                r--;
                count++;
            }
            while(u>0)
            {
                vec.push_back("U");
                u--;
                count++;
            }
        }
    }
    else
    {
        l=x1-x2;
        if(y1>y2)
        {
            d=y1-y2;
            while(l>0&&d>0)
            {
                vec.push_back("LD");
                l--;
                d--;
                count++;
            }
            while(l>0)
            {
                vec.push_back("L");
                l--;
                count++;
            }
            while(d>0)
            {
                vec.push_back("D");
                d--;
                count++;
            }
        }
        else
        {
            u=y2-y1;
            while(l>0&&u>0)
            {
                vec.push_back("LU");
                l--;
                u--;
                count++;
            }
            while(l>0)
            {
                vec.push_back("L");
                l--;
                count++;
            }
            while(u>0)
            {
                vec.push_back("U");
                u--;
                count++;
            }
        }
    }
    cout<<count<<endl;
    for(auto i:vec)
   {
       cout<<i<<endl;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}