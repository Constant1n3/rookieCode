#include<bits/stdc++.h>
using namespace std;
/* A */
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
    
    ll q,t1,n,sum = 0;
    cin>>q;
    t1 = q;
    vector<ll>ans;
    
    while(t1--)
    {
        cin>>n;
        vector<ll> v(n);
        fori(i,0,n-1)
        {
            cin>>v[i];
            sum += v[i];
        }

        
        ans.push_back((ll)ceil((sum+0.0)/n));
        sum = 0;
    }
 
    fori(i,0,q-1)
    {
        cout<<ans[i]<<"\n";
    }

    return 0;
}