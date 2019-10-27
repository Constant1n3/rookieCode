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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,ans=0;
    cin>>n;
    int songs[n];
    fori(i,0,n-1)
    {
        cin>>songs[i];
    }

    int hash[60]={0};
    //memset(hash,0,60);

    fori(i,0,n-1)
    {
        hash[songs[i]%60] += 1;
    }

    fori(i,1,29)
    {
        ans+=hash[i]*hash[60-i];
    }

    ans += (hash[0]-1)*(hash[0]>>2);
    ans += (hash[30]-1)*(hash[30]>>2);
    cout<<ans;

    return 0;
}