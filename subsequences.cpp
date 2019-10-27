#include<iostream>
#include <queue>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n,k,cost=0;
    cin>>n>>k;

    string s;
    //  for(int i=0;i<n;i++)
    // {
    //     char temp;

    //     cin>>temp;
    //     s.push_back(temp);
    // }
    cin >> s;
    //cout<<s;
    set<string> st;
    st.insert(s);
    queue<string> q;
    q.push(s);
    while(!q.empty() && st.size() < k)
    {
        string t=q.front();
        q.pop();
        for(int i=0;i<t.size();i++)
        {
            string temp=t;
            temp.erase(i,1);
            if(st.size()==k)
            {
                cout<< cost;
                return 0;
            }
            if(!st.count(temp))
            {
                st.insert(temp);
                q.push(temp);
                cost+=(n-temp.size());
            }            
        }
    }
    if(st.size()==k)
    cout<<cost;
    else
    {
        cout<<-1;
    }    
}