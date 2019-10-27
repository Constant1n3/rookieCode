#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define mk make_pair
int main()
{
    int n;
    int b,c;
    cin>>n;
    //vector<pair<int,int>> a(n);
    int cf1=0,cs1=0;
    for(int i=0;i<n;i++)
    {

        cin>>b>>c;
        if(b==1){cf1++;}
        if(c==1)cs1++;
        //a.push_back(mk(b,c));
    }
    //cout<<cf1<<" "<<cs1<<" "<<endl;
    int ans=0;
    if(cf1>n/2)ans+=n-cf1;
    else ans+=cf1;
    if(cs1>n/2)ans+=n-cs1;
    else ans+=cs1;
    cout<<ans;
}