#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int day[7];
    for( i=0;i<7;i++)
    {
        cin>>day[i];
    }
    while(1)
    {
        for( i=0;i<7;i++)
        {n-=day[i];if(n<=0){cout<<i+1; goto lb;}}
    }
    lb:
    return 0;
}