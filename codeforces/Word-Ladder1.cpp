
#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define fori(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mk make_pair
#define fs first
#define sc second
#define MAXN 1000000007

void convertTo(string& a,bool fl)
{
    if(fl==0)
    fori(i,0,a.size()-1)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=tolower(a[i]);
        }
    }
    else
    {
        fori(i,0,a.size()-1)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                ;
            }
            else
            {
                a[i]=toupper(a[i]);
            }
        }
    }
}

int main()
{
    string s;
    cin>>s;
    int up=0,lo=0;
    fori(i,0,(s.size()-1))
    {
        if(s[i]>=65&&s[i]<=91)
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
    convertTo(s, (up>lo));
    cout<<s;
    return 0;
}