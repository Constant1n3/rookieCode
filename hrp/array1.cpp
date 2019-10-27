#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,lastAns=0,seq;
    cin>>n>>q;
    int num,x,y;
    vector<int> seqList[n];
    while(q--)
    {
            cin>>num>>x>>y; //online query i.e. no need to
                            // store the query 
            int temp=(x^lastAns)%n;
        if(num==1)
        {   

            seqList[temp].push_back(y);
        }
        else if(num==2)
        {
            lastAns= seqList[temp][y%seqList[temp].size()];
            cout<<lastAns<<endl;
        }
        
    }
    return 0;
    

}