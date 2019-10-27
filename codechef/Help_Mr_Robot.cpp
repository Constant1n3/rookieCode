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

bool solve(string a, string b)
{
    map<char,int> mp1,mp2;
    ll n = a.size(), m = b.size();
    // cout<<n<<" "<<m;
    fori(i,0,n-1)
    {
      mp1[a[i]] += 1;
    }
    fori(i,0,m-1)
    {
      mp2[b[i]] += 1;
    }
    
    map<char,int>::iterator it1 = mp1.begin();
    map<char,int>::iterator it2;

    for( it1; it1 != mp1.end(); it1++ )
    {
      // cout<<"First :\n";
      // cout<<it1->first<<" "<<it1->second<<endl;
      // cout<<"Second :\n";
      // cout<<it2->first<<" "<<it2->second<<endl;
      it2 = mp2.find(it1->first);
      if(it2 == mp2.end())
        return false;
      else
      {
        if(it2->second < it1->second)
          return false;
      }  
    }

    return true;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin>>t;
  string s1,s2;

  while(t--)
  {
    cin>>s1>>s2;
    if(solve(s1,s2))
    {
      cout<<"Yes\n";
    }
    else
    {
      cout<<"No\n";
    }
  }

  return 0;
}