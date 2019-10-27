#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mk make_pair
#define fs first
#define sc second
#define MAXN 1000000007

int main()
{
    int n,ans1,ans2=0;
    bool fl=0;
    cin>>n;
    vector<int> d(n);
    fori(i,0,n-1)
    cin>>d[i];
    sort(d.begin(),d.end());
    ans1 = d[n-1];
    ford(i,n-2,0)
    {
        if(ans1%d[i]!=0)
        {
            ans2 = d[i];
            fl=1;
            break;
        }
    }
    if(fl==0)
    ford(i,n-2,0)
    {
        if(d[i]==d[i+1])
        {
        ans2=d[i];
        break;
        }
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}