#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(i,a,b) for(ll i=a;i<=b;i++)

unordered_map<ll,ll> mp;

int main()
{
    ll t,n,ans=0;
    cin>>t;
    vector<int> res(t);
    fori(i,0,t-1)
    {
        cin>>n;
        vector<int> v;
        int in;
        for(ll j=0;j<n;j++)
        {
        cin>>in;
        v.push_back(in);
        }
        ll min=v[n-1];
        ans=0;
        for(ll j=n-2;j>=0;j--)
        {
            
            if(v[j]<min)
            {
                min=v[j];
            }
            if(v[j]>min)
            {
                //cout<<v[j]<<" "<<min<<endl;
                ans++;
                //cout<<ans<<endl;
            }
            
        }
        res[i]=ans;
    }
    for(int i=0;i<t;i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}