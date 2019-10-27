#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    vector<string> b;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x>>y;
        int a[n+1];
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        if(a[1]==x&&a[n]==y)
        b.push_back("BOTH");
        if(a[1]==x&&a[n]!=y)
        b.push_back("EASY");
        if(a[1]!=x&&a[n]==y)
        b.push_back("HARD");
        if(a[1]!=x&&a[n]!=y)
        b.push_back("OKAY");
    }
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<endl;
    }
}