#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    string s;
    cin>>s;
    stack<char> st;
    ll ans=0;
    ll count=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='<'||s[i]=='[')
        {
            st.push(s[i]);
            count++;        }
        else if(count)
        {
            if(st.empty())
            {
                cout<<"Impossible";
                return;
            }
            else
            {
                char x=st.top();
                st.pop();
                if(!((x=='('&&s[i]==')')||(x=='{'&&s[i]=='}')||(x=='<'&&s[i]=='>')||(x=='['&&s[i]==']')))
                {
                    ans++;
                }
            }
            count--;
        }
        else
        {
            cout<<"Impossible";
            return;
        }
    }
    if(!count)
        cout<<ans;
    else
        cout<<"Impossible";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}