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

struct node{
    string s;
    int w, val;

    node(string s, int w, int val) : s(s), w(w), val(val)
    {} 

};

bool mycomp(node a, node b)
{
    if(a.s==b.s)
    {
        if(a.w==b.w)
        {
            return a.val  < b.val;
        }
        return a.w < b.w;
    }
    return a.s < b.s;    
}

int main()
{
    // vector<node> v;
    // v.emplace_back("sumiran", 55, 23);
    // v.emplace_back("bumiron", 55, 23);
    
    // sort(v.begin(), v.end(), mycomp);
    // for (auto x : v)
    // {
    //     cout << x.s << " " << x.val << " " << x.w << endl;
    // }

    //subsegment, subarray or substring
    //generating subarrays subarr[l...r]

    vector<int> arr{10,12,8,2,67};
    int n = arr.size();

    vector<int> pre(n,0);
    if(arr[0]&1)pre[0]=1;
    
    fori(i,1,n-1)
    {
        // if(arr[i]&1)pre[i]=pre[i-1]+1;
        // else
        // {
        //     pre[i]=pre[i-1];
        // }
        pre[i] = pre[i-1]+arr[i]&1;
    }

    for (int len = 1; len <= n; ++len)
    {
        for (int j = 0; j <= n-len; ++j)
        {
            //printing subarray subarr[j...j+len-1]
            // for (int k = j; k <= j+len-1; ++k)
            // {
            //     cout << arr[k] << " ";
            // }
            // cout << endl;
            if(j>0&&pre[j+len-1]-pre[j-1]<=k)
            {
                ans+=1;
            }
            else if(j==0 && pre[len-1]<=k)
            {
                ans+=1;
            }
        }
    }

    return 0;
}