
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    string s;
    cin>>s;
    vector<string> vec;
    string temp="";
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==','||s[i]==';')
        {
            vec.push_back(temp);
            temp="";
        }
        else
        {
            temp+=s[i];
        }
    }
    vec.push_back(temp);
    vector<string> a;
    vector<string> b;
    for(auto i:vec)
    {
        string temp=i;
        bool flag=true;
        if(temp=="") { b.push_back(i); continue; }
        if(temp.size()>1&&temp[0]=='0') { flag=false; }
        for(ll j=0;j<temp.size();j++)
        {
            if(temp[j]!='0'&&temp[j]!='1'&&temp[j]!='2'&&temp[j]!='3'&&temp[j]!='4'&&temp[j]!='5'&&temp[j]!='6'&&temp[j]!='7'&&temp[j]!='8'&&temp[j]!='9')
            {
                flag=false;
            }
            if(!flag) { break; }
        }
        if(flag) { a.push_back(temp); }
        else {b.push_back(temp); }
    }
    char x='"';
    if(a.size()==0)
    {
        cout<<"-"<<endl;
    }
    else
    {
    cout<<x;
    for(ll i=0;i<a.size();i++)
    {
        cout<<a[i];
        if(i!=a.size()-1) { cout<<","; }
        else { cout<<x; }
    }
    cout<<endl;
    }
    if(b.size()==0)
    {
        cout<<"-";
    }
    else
    {
        cout<<x;
    for(ll i=0;i<b.size();i++)
    {
        cout<<b[i];
        if(i!=b.size()-1) { cout<<","; }
        else { cout<<x; }
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