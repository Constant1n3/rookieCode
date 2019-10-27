#include<bits/stdc++.h>
using namespace std;

bool isSafe(int maze[N][N],int x, int y)
{
    if(x>=0&&x<N&&y>=0&&y<N&&maze[x][y]==1)return true;
    return false;
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{
    if(x==N-1&&y==N-1) // check if (x,y) is goal
    {
        printSol(sol);
        return true;
    }
    if(isSafe(maze,x,y))
    {
        sol[x][y]=1;
        if(solveMazeUtil(maze,x+1,y,sol))
        {
            return true;
        }
        if(solveMazeUtil(maze,x,y+1,sol))
        {
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}

bool solveMaze(int maze[N][N]) 
{ 
    int sol[N][N] = { { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 } }; 
  
    if (solveMazeUtil(maze, 0, 0, sol) == false) { 
        printf("Solution doesn't exist"); 
        return false; 
    } 
  
    printSolution(sol); 
    return true; 
} 

int main()
{

}