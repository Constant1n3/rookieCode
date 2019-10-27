#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[]={1, 2, 4, 6, 8, 14, 19, 23};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int i,j,count=0;
    for(int k=n-1;k>=0;k--)
    {
        i=0;
        j=k-1;
        while(i<j){
        if(a[i]+a[j]==a[k])
        {
            count++;
            //cout<<count;
            k--;
            j=k-1;
            i=0;
            
        }
        else if(a[i]+a[j]<a[k])
        {
            i++;
        }
        else if(a[i]+a[j]>a[k])
        {
            j--;
        }
        }
    }
    cout<<count;
}