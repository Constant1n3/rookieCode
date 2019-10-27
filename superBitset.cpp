#include<bits/stdc++.h>
using namespace std;
set<string> st1;

string find(int d, int n)
{
    string temp;
    //for(int i=0;i<n)
    while(d>0)
    {
        temp.push_back(d%2+'0');
        d/=2;
    }
    while(temp.size()<n)
    {
        
        temp.push_back('0');
        
    }
    reverse(temp.begin(),temp.end());
    return temp;
}

int find1(string s,int n)
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            //cout<<"yo";
        cnt++;
        }
    }
    return cnt;
}

void find3(string s, int len, int l, int h)
{
    if(len==0)
    return;
    if(l>h)
    {
        return;
    }
    else
    {
        
    }
}


int main()
{
    int a=10,b=26;
    int n=5;
    string s1=find(a,n);
    string s2=find(b,n);
    cout<<s1<<" "<<s2;
    // int l1=  find1(s1,n);
    // int l2=  find1(s2,n);
    
    // for(int i=0;i<n;i++)
    // {
    //     find3(s1,n,i,n-1);   
    // }

    // set<string>::iterator it;
    // for(it=st1.begin();it!=st1.end();it++)
    // {
    //     cout<<" "<<*it;
    // }
}