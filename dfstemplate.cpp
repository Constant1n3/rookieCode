#include<bits/stdc++.h>
using namespace std;
#define maxIn 100005

vector<int>A[maxIn];

void dfs(int a,vector<bool>&visited)
{
    visited[a]=1;
    cout<<a<<" ";
    for(auto x:A[a])
    {
        if(!visited[x])
        {
            dfs(x,visited);
        }
    }

}

void bfs(int s,int n)
{
    vector<bool>visited(n+1,0);
    visited[s]=1;
    //cout<<s<<" ";
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int t=q.front();
        cout<<t<<" ";
        q.pop();
        for(auto x: A[t])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x]=1;
            }
        }
    }
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    
    vector<bool>visited(n,0);
    dfs(1,visited);
    cout << endl;
    bfs(1,n);
    return 0;
}