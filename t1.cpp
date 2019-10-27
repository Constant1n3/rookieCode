#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define mk make_pair
//#define REP(i,a,b) for(int i=a; i<=b; i++)
#define mod 1000000007

int main()
{
    ll n;
    float ans;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // for(int x : v)
    //     cout << x << " ";
    stack<float> a;
    for(int i=n-1;i>=0;i--)
    {
        a.push(v[i]);
    }
    while(a.size()!=1)
    {
        float p=a.top();
        a.pop();
        float q=a.top();
        a.pop();
        ans=(p+q)/2;
        a.push(ans);
       // cout << a.size() << endl;
    }
    cout<<a.top();
    return 0;
}