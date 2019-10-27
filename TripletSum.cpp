#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1, 4, 45, 6, 10, 8};
    int n=sizeof(a)/sizeof(a[0]);
    int s;
    bool fl;
    cout<<"Enter the value of the sum :\n";
    cin>>s;
    sort(a,a+n);
    for(int k=n-1;k>=0;k--)
    {
        int i=0,j=k-1;
        while(i<j)
        {
            if(s==(a[i]+a[j]+a[k]))
            {
                cout<<"the triplet is :"<<a[i]<<"\t"<<a[j]<<"\t"<<a[k];
                return 0;
            }
            else if (s<(a[i]+a[j]+a[k]))
            {
                j--;
            }
            else if(s>(a[i]+a[j]+a[k]))
            {
                i++;
            }
        }
    }
    cout<<"\nNo such Triplet exists";
}