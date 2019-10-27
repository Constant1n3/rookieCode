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
    
    ll n,m,t,q,ans=0;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>q;
        ll l,r;
        vector<ll> lc(n+1,0),rc(m+1,0);
        ll cnt=0;
        fori(i,0,q-1)
        {
            cin>>l>>r;
            lc[l]++;
            rc[r]++;
        }
        // fori(i,1,n)      /* ganda brute */
        // {
        //     fori(j,1,m)
        //     {
        //         if((lc[i]+rc[j])%2==1)
        //             cnt++;
        //     }
        // }
        int even_row = 0, even_col = 0;
        fori(i,1,n)
            if ((lc[i]&1) == 0)
                even_row += 1;
        fori(i,1,m)
            if ((rc[i]&1) == 0)
                even_col += 1;

        cout << (n-even_row)*(even_col) + even_row*(m-even_col) << endl; 
        //cout << cnt << endl;
    }
    
    return 0;
}