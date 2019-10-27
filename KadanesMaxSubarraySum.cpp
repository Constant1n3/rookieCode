#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a)    //n^3 approach 
{
    int n = a.size(),sum=0,best=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            sum+=a[k];
        }
        best=max(best,sum);
    }
    return best;
}
int solve1(vector<int> a)   //n^2 approach
{
    int n = a.size(),sum=0,best=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            
            /* adding the vales of the subarray 
               as the right index moves 
               i.e. no need for these 
               //sum=0;                                
               //for(int k=i;k<=j;k++)*/ 
            sum+=a[j];
            best=max(best,sum);
        }
        
    }
    return best;
}


int kadane(vector<int> a)   //n 
{
    int n = a.size(), sum = 0,best=0;
    for(int i = 0; i < n; i++ )
    {
        sum=max(a[i],a[i]+sum);
        best = max(sum,best);
    }
    return best;     
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<solve1(a);


} 