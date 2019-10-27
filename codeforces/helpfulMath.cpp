#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>a;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')a.push_back(s[i]-'0');
    }
    sort(a.begin(),a.end());
    for(int i=0,j=0;i<s.size()&&j<a.size();i++)
    {
        if(s[i]!='+'){s[i]=a[j]+'0';j++;
        //cout<<s[i]<<" "<<endl;
        //cout<<a[j]<<endl;
        }
    }
    cout<<s;
}