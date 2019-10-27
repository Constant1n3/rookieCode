#include <iostream>
#include <vector>
using namespace std;

int minCostPath(int A[21][21],int n)
{
    for(int i = 0; i <n+1; ++i)
    {
        for(int j = 0 ; j < n+1; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
    int dp[n+1][n+1];
    dp[0][0]=A[0][0];
    for(int i=1;i<=n;i++)
    {
        dp[0][i]=dp[0][i-1]+A[0][i];
    }
    for(int j=1;j<=n;j++)
    {
        dp[j][0]=dp[j-1][0]+A[j][0];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=A[i][j]+max(dp[i][j-1],max(dp[i-1][j-1],dp[i-1][j]));
        }
    }
    return dp[n][n];
}

int main() {
	//code
	int n,t;
	cin>>t;
	int ans[t];
	for(int k=0;k<t;k++)
	{
	    cin>>n;
	    int A[21][21];
	    //vector<vector<int> > A(n, vector<int> (n));
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        cin>>A[i][j];
	    ans[k]=minCostPath(A,n-1);    
	}
	for(int i=0;i<t;i++)
	{
	    cout<<ans[i]<<endl;
	}
	return 0;
}