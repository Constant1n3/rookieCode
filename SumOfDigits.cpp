#include<bits/stdc++.h>
//#define ll long long
//#define pb push_back 
using namespace std;

int f(int p, int q)
{
    if(p==0)
        return 0;
    // if (p > 1 && q == 0)
    //     return 0;
    if(p==1&&q>=0&&q<9)
    {
        return 1;
    }
    int tmp=0;
    for(int i=1;i<=9&&i<q;i++)
    {
        tmp+=f(p-1,q-i);
    }
    return tmp;
}

int main()
{
    int n,s;
    cin>>n,s;
    cout<<f(n,s);
}