 #include<bits/stdc++.h>
using namespace std;
//set<int> a;

int main()
{
    int n;
    cin>>n;
    // string str = to_string(n);
    // //cout<<str[3];
    // for(int i=0;i<4;i++)
    // {
    //     a.insert(str[i]);
    // }
    int t=n+1,tmp=n+1;
    //string str1 = to_string(t0);
    vector<int>a;
    for(int i=0;i<4;i++)
    {
        a.push_back(t%10);
        t/=10;
    }
    t=tmp;
    //int a=t%10, b=t%100, c=t%1000, d=t%10000;
    while(a[0]==a[3]||a[1]==a[3]||a[3]==a[2]||a[1]==a[2]||a[0]==a[2]||a[0]==a[1])
    {
        t++;
        tmp=t;
        for(int i=0;i<4;i++)
        {
            a[i]=t%10;
            t/=10;
        }
        t=tmp;
        //a=t%10, b=t%100, c=t%1000, d=t%10000;
    } 
    cout<<t;   
}