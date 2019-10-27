#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool m[5][5];
    int cur_i,cur_j,ans=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>m[i][j];
            if(m[i][j]==1)
            {
                cur_i=i;
                cur_j=j;
            }        
        }
    }
    if(cur_i>2)ans+=cur_i-2;
    else if(cur_i<2)ans+=2-cur_i;
    if(cur_j>2)ans+=cur_j-2;
    else if(cur_j<2)ans+=2-cur_j;
    cout<<ans;
    
}