#include<bits/stdc++.h>
using namespace std;

#define fori(i,a,b) for (long int i = a; i <= b ; ++i)
#define ford(i,a,b) for(long int i = a;i >= b ; --i)
#define mk make_pair
#define mod 1000000007
#define MAXN 1000000
#define pb push_back
#define vec vector<long long int>
#define ll long long
#define rnd mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count())
#define pi pair<long long int,long long int>
#define sc second
#define fs first

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin>>t;
  string s[t];

  fori(i,0,t-1)
  {
    map<char,int> mp;
    string a,b="";
    cin>>a;

    ll n = a.size();
    fori(i,0,n-1)
    {
      mp[a[i]] += 1;
      if(a[i]!=a[i+1]&&i!=n-1)
      {
        b.pb(a[i]);
      }
      if(a[n-1-i]!=a[n-2-i]&&i!=0)
      {
        b.pb(a[n-1-i]);
      }
    }
    
    for(auto x:mp)
    {
      if(x.second&1)
      {
        b.pb(x.first);
      }
    }

    map<char,int> mpb;
    fori(i,0,b.size()-1)
    {
      mpb[b[i]] += 1;
    }
    for(auto x:mpb)
    {
      s[i].pb(x.first);
    }
  }

  fori(i,0,t-1)
  {
    cout<<s[i]<<endl;
  }

  return 0;
}