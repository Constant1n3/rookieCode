
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mk make_pair
 
int main()
{
    int n,m,win_size,mi=1005,ma=0,ans=1005;
    cin>>n>>m;
    win_size=n;
    vector<int> f(m);
    fori(i,0,m-1)
    {
        cin>>f[i];
    }
    
    //cout<<endl;
    sort(f.begin(),f.end());
    fori(i,0,m-win_size)
    {
        mi=1005,ma=0;
        fori(j,i,i+win_size-1)
        {
            mi = min(mi,f[j]);
            ma = max(ma,f[j]);
        }
        ans=min(ans,ma-mi);
    }
    cout<<ans;
    return 0;
}