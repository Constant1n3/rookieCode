#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector <int> v)
{
    int dp[n+1];
    dp[0] = 1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        dp[i] = 1;
        for(int j=i-1;j>=0;j--)
        {
            if(v[j]<v[i])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        cout << i << " " << dp[i] << endl;
        ans = max(ans,dp[i]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0 ; i < n; ++i)
            cin >> v[i];
        cout<<solve(n,v)<<endl;
    }
}