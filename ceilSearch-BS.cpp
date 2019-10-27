#include<bits/stdc++.h>
using namespace std;

int findCeil(int a[],int l, int r, int x)
{
    int m;
    while(r-l>1)
    {
        m=l+(r-l)/2;
        if(a[m]>=x)
        r=m;
        else
        {
            l=m;
        }
        
    }
    return r;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b=findCeil(a,-1,n-1,x);
    cout<<a[b]<<" is the ceil of "<<x<<endl;
    return 0;
}