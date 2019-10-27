#include<bits/stdc++.h>
using namespace std;

int mincost(int c[][],int n, int m)
{
    int dp[m+1][n+1];
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=c[i][j];
            }
            else
            {
                dp[i][j]=c[i][j]+min(min(dp[i-1][j-1],dp[i][j-1]),
                dp[i-1][j]);
            }
            
        }
    }
    return dp[m][n];
}


int main()
{

}