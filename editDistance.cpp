#include <bits/stdc++.h>
using namespace std;
string s1,s2;

int solve(int i,int j)
{
    if (i == -1)
        return j+1;
    if (j == -1)
        return i+1;
    if(s1[i]==s2[j])
    {
        return solve(i-1,j-1);
    }
    else
    {
        return 1+min(min(solve(i-1,j-1),solve(i,j-1)),solve(i-1,j));
    }
}

int main()
{
    
    cin>>s1>>s2;
    int n1=s1.length(),n2=s2.length();
    cout<<solve(n1-1,n2-1);

    return 0;
}