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

  int t,n;
  bool fl=false;
  cin>>t;

  while(t--)
  {
    fl = false;
    cin>>n;
    string s;
    cin>>s;
    fori(i,0,n-1)
    {
      if(s[i]=='1'||s[n-1-i]=='1')
      {
        cout<<(n-i)*2<<"\n";
        fl = true;
        break;
      }
    }
    if( fl == false )
    {
      cout<<n<<"\n";
    }
  }

  return 0;
}