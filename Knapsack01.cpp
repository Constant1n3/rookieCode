#include <iostream>
using namespace std;


int knapsack(int w,int n,int val[],int wt[])
{
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if(wt[i-1]<=j)
            {
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][w];
}


int main() 
{ 
    int t,n,w;
    cin>>t;
    int ans[t];
    for(int k=0;k<t;k++)
    {
        cin>>n>>w;
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>val[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>wt[i];
        }
        ans[k]=knapsack(w,n,val,wt);
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
