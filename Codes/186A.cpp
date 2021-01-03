
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    string s1,s2;
    cin>>s1>>s2;
    ll arr1[26]={0},arr2[26]={0};
    if(s1.size()!=s2.size())
    {
        cout<<"NO";
    }
    else
    {
        for(ll i=0;i<s1.size();i++)
        {
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        bool flag=true;
        for(ll i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            ll c=0;
            for(ll i=0;i<s1.size();i++)
            {
                if(s1[i]!=s2[i])
                {
                    c++;
                }
                if(c>2)
                {
                    flag=false;
                    break;
                }
            }
            if(c==1) { flag=false; }
            if(flag)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            cout<<"NO";
        }
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