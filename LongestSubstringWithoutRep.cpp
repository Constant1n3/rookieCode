#include<bits/stdc++.h>
//#include<deque>
using namespace std;


int main()
{
    // deque<char> a;
    // string s;
    // cin>>s;
    // int tmp=0,temp=0;
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s[i]!=s[i+1])
    //     {
    //         a.push_front(s[i]);
    //         temp++;
    //     }
    //     else
    //     {
    //         a.clear();
    //         tmp=a.size();
    //         a.push_front();
    //         tmp++;
    //     }
         
    // }
    // cout<<max(temp,temp);
    string s;
    cin>>s;
    int a[26]={0};
    int ans=0,temp=0;
    for(int i=0;i<s.size();i++)
    {
        if(a[s[i]-'A']==0)
        {
            //cout<<"bug";
        a[s[i]-'A']++;
        }
        else
        {
            //cout<<"de";
            for(int j=0;j<26;j++)
            {
                if(a[j])
                temp++;
            }
            //cout<<temp;
            memset(a,26,0);
            
            //continue;
        }
        ans=max(ans,temp);
        temp=0;
    }
    cout<<ans;
}
