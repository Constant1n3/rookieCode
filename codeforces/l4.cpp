#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rep1(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    string s;
    cin>>s;
    
    rep(i,0,s.size())
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-'&&s[i+1]=='-')
        {
            cout<<2;
            i=i+1; //we won't write continue here as that 
                    //make us compare the second '-' 
                    //as if it were the first.
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            cout<<1;
            i=i+1;
        }
    }
}