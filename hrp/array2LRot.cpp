#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    queue<int>b;
    for(int i=0;i<n;i++)
    {

        b.push(a[i]);
    }
    int tmp;
    for(int i=0;i<d;i++)
    {
        tmp=b.front();
        b.pop();
        b.push(tmp);
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b.front();
        b.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}