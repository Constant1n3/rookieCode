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
 
  int t,a,b,c,d,k;
  cin>>t;
  while(t--)
  {
    int t1=0,t2=0;
    cin>>a>>b>>c>>d>>k;
    if(a%c != 0)
    {
      t1 = a/c + 1;
    }
    else t1 = a/c;
    if(b%d != 0)
    {
      t2 = b/d + 1;
    }
    else t2 = b/d;
    if(t1+t2>k)
    {
      cout<<-1;
    }
    else
    {
      cout<<t1<<" "<<t2;
    }
    cout<<endl;
  }
 
  return 0;
}