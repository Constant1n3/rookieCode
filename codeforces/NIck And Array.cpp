#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<climits>
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
    
    ll n,neg_max=0,nmi;
    cin>>n;
    vector<ll> v(n),pos;

    fori(i,0,n-1)
    {
        cin>>v[i];
        if(v[i] == 0)
            v[i] = -1;
        if(v[i] > 0)
        {
            v[i] = -v[i] - 1;
        } 
        if( v[i] < neg_max)
        {
            neg_max = v[i];
            nmi = i;
        }        
    }

    if(n&1)
    {
        v[nmi] = -v[nmi] - 1;
    }

    for(auto x : v)
        cout<<x<<" ";

    return 0;
}