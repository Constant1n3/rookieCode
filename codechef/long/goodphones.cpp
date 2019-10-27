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
    
    ll n,t,ans=0;
    cin>>t;

    while(t--)
    {
        ans = 0;
        cin>>n;
        vector<int> v(n);
        fori(i,0,n-1)
        {
            cin>>v[i];
        }
        for(int i = 0; i < 5; ++i)
        {
            bool tmp = 1;
            vector<bool> flag(5,0);
            fori(j,0,i-1)
            {
                if(v[j]>v[i])
                {
                    //cout<<v[j]<<" ";
                    flag[j]=1;
                }
                else flag[j]=0;
            }
            //cout<<"\n";
            fori(j,0,i-1)
                tmp = (tmp&flag[j]);
            if(tmp==1)
            {
                //cout << i << " kato mera" << endl;
                ans+=1;
            }
        }
        fori(i,5,n-1)
        {
            bool hello = 0;
            //cout<<i<<" "<<v[i]<<"\n";
            fori(j,i-5,i-1)
            {
                if(v[j]<=v[i])
                {
                    hello = 1;
                    break;
                }
            }
            if (!hello)
                ans +=1;
        }
        cout<<ans<<endl;
        ans=0;
    }
    
    return 0;
}