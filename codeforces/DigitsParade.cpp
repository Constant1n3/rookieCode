/* Numerical DP Question Includes concepts of % and DP 
Link : https://atcoder.jp/contests/abc135/tasks/abc135_d */
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

ll dp[100005][20];

int main()
{
    string s;
    cin>>s;
    ll n = s.size(),i;
    reverse(s.begin(),s.end());
    vector<ll> y(n,0);
    for( i = 0 ; i < n ; ++i)
    {
        if(i==0)
        {
            y[i]=1;
        }
        else
        {
            y[i]=(y[i-1]*10)%13;
        }
    }

    for( i = 0;i < n ;i++)
    {
        if(s[i]!='?')
        {
            y[i]=((s[i]-'0')*y[i])%13;
        }
        //cout << i << " " << y[i] << endl;
    }

    //dp solution proceeds
    // dp[i][j] represents no of arrangements of digits from 0 to i
    //such that (num%13) = j

    fori(i,0,n-1)
    {
        if(i==0)
        {
            if(s[0]!='?')
            {
                fori(j,0,12)
                {
                    if(j==s[0]-'0')
                    dp[i][j]=1;
                    else dp[i][j]=0;
                }
            }
            else
            {
                fori(j,0,12)
                {
                    if(j<10)
                    dp[i][j]=1;
                    else dp[i][j]=0;
                }
            }
        }
        else if(s[i]=='?')
        {
            fori(j,0,12)
            {
                fori(k,0,12)
                {
                    fori(d,0,9)
                    {
                        if((k+y[i]*d)%13==j)
                            dp[i][j]=(dp[i][j]+dp[i-1][k])%MAXN;
                    }
                }
            }    
        }
        else
        {
           fori(j,0,12)
            {
                fori(k,0,12)
                {
                    if ((k+y[i])%13 == j)
                        dp[i][j] =(dp[i][j] + dp[i-1][k])%MAXN;
                }
            }  
        }
    }
    // fori(i,0,n-1)
    // {
    //     cout << dp[i][5] << " ";
    // }
    cout<<dp[n-1][5];
    return 0;
}