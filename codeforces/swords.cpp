#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(i,a,b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mk make_pair
#define fs first
#define sc second
#define MAXN 1000000007

ll findGCD(vector<ll> v, ll n)
{
    ll ans;
    for(ll i = 0; i < n; ++i)
    {
        if (i == 0) 
            ans = v[i];
        else
        {
            ans = __gcd(ans,v[i]);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,sum=0,ganda,x=INT_MIN,t1,t2;
    cin>>n;
    vector<ll> a(n);
    fori(i,0,n-1)
    {
        cin>>a[i];
        sum+=a[i];
        x = max(a[i],x);
    }

    ganda=findGCD(a,n);
    if(n%ganda==0)
    {
        t1=n/ganda;
        t1*=x;
        t1-=sum/ganda;
        // cout<<min(t1,ganda)<<" "<<max(t1,ganda);
        if (ganda == 1 || t1 == 1)
            cout << 1 << " " << max(ganda,t1);
        else
            cout<<t1<<" "<<ganda;
    }
    else
    {
        t1=(ll)ceil(x/ganda);
        t1*=n;
        t1-=sum/ganda;
        if (ganda == 1 || t1 == 1)
            cout << 1 << " " << max(ganda,t1);
        else
            cout<<t1<<" "<<ganda;
    }

    return 0;
}