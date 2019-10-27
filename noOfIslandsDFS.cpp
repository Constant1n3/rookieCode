#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

int drow[]={-1,-1,-1,0,1,1,1,0};
int dcol[]={-1,0,1,1,1,0,-1,-1};
bool visit[51][51];
void dfs(vector<int> A[],pair<int,int> s,int N,int M)
{
    cout << s.first << " " << s.second << endl;
    visit[s.first][s.second] = 1;
    for(int i=0;i<8;i++)
    {
        
        if(s.first+drow[i]>=0&&s.first+drow[i]<N&&s.second+dcol[i]>=0&&s.second+dcol[i]<M)
        {
            if(A[s.first+drow[i]][s.second+dcol[i]]==1&&!visit[s.first+drow[i]][s.second+dcol[i]])
            {
                dfs(A,make_pair(s.first+drow[i],s.second+dcol[i]),N,M);
                //visit[s.first+drow[i]][s.second+dcol[i]]=1;
            }
        }
        
    }
}
int findIslands(vector<int> A[], int N, int M)
{
    int ans = 0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            visit[i][j]=0;
        }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(!visit[i][j]&&A[i][j]==1)
            {
                ans += 1;
                cout << "island" << endl;
                dfs(A,make_pair(i,j),N,M);
                cout << "island" << endl;
            }
        }
    }
    return ans;
}

int main() {
    
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		vector<int> A[N];
		for(int i=0;i<N;i++){
		    vector<int> temp(M);
		    A[i] = temp;
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
