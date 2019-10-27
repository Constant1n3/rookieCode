#include<bits/stdc++.h>
using namespace std;

// int find(string s,string x)
// {
//     int idx,i;
//     bool flag=0;
//     if(x[0]!='*')
//     {
//         for( i=0;i<s.size();i++)
//         {
//             for(int j=0;j<x.size();j++)
//             {
//                 if(s[i]==x[j]||x[j]=='*')
//                 {
                    
//                     flag=1;
//                     //continue;
//                 }
//                 else flag=0;
//             }
            
//         }
//     }
//     else
//     {
//         for( i=0;i<s.size();i++)
//         {
//             for(int j=1;j<x.size();j++)
//             {
//                 if(s[i]==x[j])
//                 {
//                     flag=1;
//                     //continue;
//                 }
//                 else flag=0;
//             }
//         }
//     }
//     if(flag==1)
//     return 1;
//     else return 0;    
// }

int solve(string s, string x)
{
    int win_size = x.length();
    int n=s.size();
    bool flag;
    for(int i=0;i<=n-win_size;i++)
    {
        flag=0;
        for(int j=0;j<=win_size-1;j++)
        {
            if(x[j]=='*')
            {
                continue;
            }
            else
            {
                if(x[j]!=s[i+j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        return i;
    }
    return -1;
}

int main()
{
    string s,x;
    cin>>s;
    cin>>x;
    cout<<solve(s,x);
}