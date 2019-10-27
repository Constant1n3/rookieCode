#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
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
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
int findIslands(vector<int> A[], int N, int M)
{
    
    int drow[]={-1,-1,-1,0,1,1,1,0};
    int dcol[]={-1,0,1,1,1,0,-1,-1};// Your code here
    
    bool visited[N][M];
    for(int i = 0 ; i < N; ++i)
        for(int j = 0 ; j < M; j++)
            visited[i][j] = 0;
    
    int ans = 0;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(visited[i][j] == 0 && A[i][j] == 1)
            {
                // run bfs with point(i,j) as the source
                ans += 1;
                queue<pair<int,int> > q;
                q.push(make_pair(i,j));
                visited[i][j] = 1;
                
                while (!q.empty())
                {
                    pair<int,int> t = q.front();
                    int r = t.first, c = t.second;
                    q.pop();
                    for(int k = 0 ; k < 8; ++k)
                    {
                        if (r+drow[k] >= 0 && r+drow[k] < N && c+dcol[k] >= 0 && c+dcol[k] < M)
                        {
                            int new_row = r+drow[k], new_col = c+dcol[k];
                            if (!visited[new_row][new_col] && A[new_row][new_col] != 0)
                            {
                                q.push(make_pair(new_row,new_col));
                                visited[new_row][new_col] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return ans;
}