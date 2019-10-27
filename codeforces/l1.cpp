#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>f(n,vector<int> (3));
    vector<int> sum(3);
    sum[0]=sum[1]=sum[2]=0;
    for(int i=0;i<n;i++)
    {
        cin>>f[i][0]>>f[i][1]>>f[i][2];
        sum[0]+=f[i][0];
        sum[1]+=f[i][1];
        sum[2]+=f[i][2];
    }
    if(sum[0]==0&&sum[1]==0&&sum[2]==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";

}