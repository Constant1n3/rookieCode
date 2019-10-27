#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=a;i<=b;i++)

int main()
{
    int q,n,k;
    cin>>q;
    rep(i,0,q-1)
    {
    cin>>n>>k;
    vector<int> arr(n+1);
    rep(j,1,n)
        cin>>arr[j];
    //count odds
    ll total_odd = 0;
    rep(i,1,n)
    {
        if (arr[i]&1)   //odd
            total_odd += 1;
    }
    
    bool par1 = total_odd%2, par2 = k%2;
    // if (par1)
    //     cout << "ha bhai" << endl;
    // if (par2)
    //     cout << "kya pta bhai" << endl;
    if (par1 != par2 || total_odd < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        bool flag = 0;  //mereko odd chahiye
        int cnt = 0;
        rep(i,1,n)
        {
            if (cnt == k-1)
                break;
            if (arr[i]&1)
            {
                cout << i << " ";
                cnt += 1;
            }
            //cout << odd_cnt[i]%2 << " " << i << " " << (flag?"hai":"nahi h") << endl;
        }
        cout << n << endl;
    }
    }
    return 0;
}