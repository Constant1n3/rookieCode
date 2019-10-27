#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t,n,k,tmp;
 
cin>>t;
int ans[t];

for(int i=0;i<t;i++)
{
ans[i]=0;
cin>>n>>k;
for(int j=0;j<n;j++)
{
    cin>>tmp;
    ans[i]+=tmp/k;
}
}

for(int i=0;i<t;i++)
cout<<ans[i]<<endl;

return 0;
}