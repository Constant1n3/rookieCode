#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
/* program to check if subsequence with sum = x exists */

bool** dp;
void get(vector<int>res)
{
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
void Print(vector<int> res, int n, int k,int arr[])
{
    if(n==0&&k!=0&&dp[n][k])
    {
        res.pb(arr[n]);
        get(res);
        return;
    }
    if(n==0&&k==0)
    {
        get(res);
        return;
    }
    if(dp[n-1][k])
    {
        Print(res,n-1,k,arr);
    }
    if(arr[n]<=k&&dp[n-1][k-arr[n]])
    {
        res.pb(arr[n]);
        Print(res,n-1,k-arr[n],arr);
    }

}

void Find(int arr[],int k,int n)
{
    dp=new bool*[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=new bool[k+1];
        dp[i][0]=true;

    }
    if(arr[0]<=k)
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j>=arr[i])
            dp[i][j]=dp[i-1][j-arr[i]]||dp[i-1][j];
            else
            {
                dp[i][j]=dp[i-1][j];
            }
            
        }
    }
    vector<int>res;
    Print(res,n-1,k,arr);

   // return dp[n-1][k];


}

bool findRec(int arr[],int n, int k) //recursive approach
{
    if(k==0) //sum = 0 (return true because empty set will have sum = 0)
    return true;
    if(n<=0) //no elements int array
    return false;
    if (arr[n-1]<=k)
    {
        return findRec(arr,n-1,k-arr[n-1])||findRec(arr,n-1,k);
    }
    else
    {
        return findRec(arr,n-1,k);
    }
    return false;
}

bool findDP(int arr[], int n,int k)
{
    bool dp[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }
    for(int i=1;i<=k;i++)
    {
        dp[0][i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j>=arr[i-1])
            {
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][k];
}


int main()
{
    int arr[]={3,6,4,5,1,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=72;
    /*Find(arr,k,n);*/
    cout<<"Recursive Approach : "<<findRec(arr,n,k)<<endl;
    cout<<"DP approach        : "<<findDP(arr,n,k)<<endl;
    return 0;
}