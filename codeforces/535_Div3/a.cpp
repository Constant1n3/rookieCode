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
    ll n,l1,r1,l2,r2;
    cin>>n;
    vector<int> a(n),b(n);
    fori(i,0,n-1)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2)
        {
            a[i]=l1;
            b[i]=r2;
        }
        else
        {
            a[i]=l1;
            b[i]=l2;
        }
    }
    fori(i,0,n-1)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}