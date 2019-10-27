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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll k,t1,n,s = 0;
    cin>>n>>k;
    deque<ll> screen;
    map<ll,bool> visit;
    
    while(n--)
    {
        cin>>t1;
        s = screen.size();
        if(s<k)
        {
            if(visit[t1] != 1)
            {
                screen.push_front(t1);
                //cout<<"pushed "<<t1<<endl;
                visit[t1]=1;
            }
        }
        else
        {
            if(visit[t1] != 1)
            {
                visit[screen.back()] = 0;
                screen.pop_back();
                screen.push_front(t1);
                visit[t1]=1;
                // cout<<"pushed "<<t1<<endl;
            }
        }
    }

    cout<<screen.size()<<"\n";
    while(!screen.empty())
    {
        cout<<screen.front()<<" ";
        screen.pop_front();
    }
    
    return 0;
}