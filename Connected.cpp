#include<bits/stdc++.h>
using namespace std;
list<int>*adj;
int *visited;
int cnt;
void Find(int s)
{
    visited[s]=1;
    cnt++;
    for(auto i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(visited[*i]==0)
        Find(*i);
    }
}

int main()
{
    int maxans=0;
    int n,m;
    cin>>n>>m;

    adj=new list<int>[n+1];
    visited=new int[n+1];
    memset(visited,0,n+1);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    int temp;
    for(int i=0;i<=n;i++)
    {
        if(!visited[i])
        {

            cnt=0;
            Find(i);
            if(cnt>maxans)
            {
                maxans=cnt;
                temp=i;
            }
        }
    }
    cout<<maxans<<" "<<temp;

    
}