#include<bits/stdc++.h>

using namespace std;
int CutROd(int price[],int n)
{
    int val[n+1];
    val[0]=0;
    int i,j;

    for(i=1;i<=n;i++)
    {
        int max_val=-1;
        for(j=0;j<i;j++)
        {
            max_val=max(max_val,(price[j]+val[i-j-1]));
        }
        val[i]=max_val;
    }
    return val[n];
}


int main()
{
    int a[]={1, 5, 8, 9, 10, 17, 17, 20};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the maximum price we can get is "<<CutROd(a,n);
}