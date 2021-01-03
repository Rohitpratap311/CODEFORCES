
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    string ans="YES";
    string a;
    getline(cin,a);
    ll alpha[123]={0};
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]!=' ')
        {
            alpha[(int)a[i]]++;
        }
    }
    string b;
    getline(cin,b);
    for(ll i=0;i<b.size();i++)
    {
        if(b[i]!=' ')
        {
            if(alpha[b[i]]==0)
            {
                ans="NO";
                break;
            }
            else
            {
                alpha[b[i]]--;
            }
        }
    }
    cout<<ans;
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