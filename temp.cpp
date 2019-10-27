#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define mk make_pair
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define mod 1000000007
int main()
{
    ll n,k;
    cin >> n >> k;
    vector<int> v(n);
    REP(i,0,n-1)
        cin >> v[i];
    
    //internal inversion count
    ll int_inv = 0;
    REP(i,0,n-1)
    {
        //cout << v[i] << endl;
        REP(j,i+1,n-1)
        {
            if (v[j] < v[i])
            {
                //cout << v[j] << " ";
                int_inv += 1;
            }
        }
        //cout << endl;
    }
    //inversion count for other k-1
    ll ext_inv = 0;
    REP(i,0,n-1)
    {
        REP(j,0,n-1)
        {
            if (i != j && v[j] < v[i])
            {
                ext_inv += 1;
            }
        }
    }
   // cout << int_inv << " " << ext_inv << endl; 
    ll ans = k*(k-1)/2;
    //cout << ans << " hoi " << k*k << endl;
    ans = ans%mod;
    //cout << ans << endl;
    ans = ((ans*ext_inv)%mod + (k*int_inv)%mod)%mod;
    cout << ans << endl;
}