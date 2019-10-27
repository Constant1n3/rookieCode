#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

ll find(vector<ll>a,vector<ll>b,int n)
{
    vector<ll> diff(n+2);
    int m=a.size();
    for(ll i=1;i<=n+1;i++)
    {
        diff[i]=n+1;
    }
    for(ll i=0;i<m;i++)
    {
        diff[min(a[i],b[i])]=max(a[i],b[i]);
        //cout<<diff[i]<<" ";
    }
    for(ll i=1;i<=n+1;i++)
    {
        diff[i]-=i;
        cout<<diff[i]<<" ";
    }
    cout<<endl;
    for(ll i=n;i>=1;i--)
    {
        diff[i]=min(diff[i],diff[i+1]+1);
        cout<<diff[i]<<" ";
    }
    cout<<endl;
    ll sum=0;
    for(ll i=1;i<n+2;i++)
    {
        sum+=diff[i];
        //cout<<sum;
    }
    return sum;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<ll> a(m),b(m);
    for(int i=0;i<m;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    cout<<find(a,b,n);
}
