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

  ll n,k,a,ans = 0;
  cin>>n>>k;
  vector<ll> g(n),v(n);
  multiset <ll> mset; /* implemented as BST */
  fori(i,0,n-1)
  {
    cin>>g[i];
  }
  cin>>a;
  fori(i,0,n-1)
  {
    cin>>v[i];
  }

  fori(i,0,n-1)
  {
    mset.insert(g[i]);
    while(v[i] > k)     // kyuki it's possible that he took a drink 
    {                   // every day before the day he couldn't lift the
                        // given weight
      if(mset.empty())
      {
        cout<<-1;
        return 0;
      }
      k += a;
      ans += *mset.begin();
      mset.erase(mset.begin());
    }      
  }

  cout<<ans<<endl;
  return 0;
}