#include<bits/stdc++.h>
using namespace std;

#define R 5
#define C 5
 int dx[] = {-1, 0, 1, 0}; 
 int dy[] = {0, 1, 0, -1}; 
 bool visit[R][C];
pair<int,int> Find2(int dis[][C])
{
    int mx=INT_MAX;
    int temp1,temp2;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(!visit[i][j]&&dis[i][j]<mx)
            {
                mx=dis[i][j];
                temp1=i;
                temp2=j;

            }
        }
    }
    return make_pair(temp1,temp2);
}
int Find(int A[R][C])
{
    int dis[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        dis[i][j]=INT_MAX;
    }
    dis[0][0]=A[0][0];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            pair<int,int> temp=Find2(dis); //find2 will give min indx
            int x=temp.first;
            int y=temp.second;
            visit[temp.first][temp.second]=true;
            for(int i=0;i<4;i++)
            {
                int temp1=x+dx[i];
                int temp2=y+dy[i];
                if(temp1>=0&&temp1<R&&temp2>=0&&temp2<C&&!visit[temp1][temp2]&&dis[x][y]!=INT_MAX&&dis[x][y]+A[temp1][temp2]<dis[temp1][temp2])
                dis[temp1][temp2]=dis[x][y]+A[temp1][temp2];

            }

        }
    }
    return dis[R-1][C-1];
}

int main()
{ 
     int A[R][C] = 
    { 
        31, 100, 65, 12, 18, 
        10, 13, 47, 157, 6, 
        100, 113, 174, 11, 33, 
        88, 124, 41, 20, 140, 
        99, 32, 111, 41, 20 
    }; 
  cout<<Find(A);

}