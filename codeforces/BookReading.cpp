#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mk make_pair


int main()
{
    ll n,m;
    int q;
    cin >> q; 
    vector<int> arr[10], ans(10,0);
    fori(i,1,9)
    {
        vector<bool> v(10,0);
        fori(j,1,10)
        {
            if (!v[i*j%10])
                arr[i].pb(i*j%10), v[i*j%10] = 1;
            else
                break;
        }
        for (int j = 1; j < arr[i].size(); ++j)
        {
            arr[i][j] += arr[i][j-1];
            if (j == arr[i].size()-1)
                ans[i] = arr[i][j];
        }
    }

    // fori(i,1,9)
    // {
    //     cout << i << " ka h" << endl;
    //     for (auto x : arr[i])
    //         cout << x << " ";
    //     cout << endl;
    // }

    ll tmp,rem,rem1,tmp1;
    fori(i,1,q)
    {
        cin>> n >> m ;
        tmp=n/m;
        rem=m%10;
        if (rem == 0)
        {
            cout << 0 << endl;
            continue;
        }
        rem1=tmp/arr[rem].size(); // pura pura milne wala
        tmp1=tmp%arr[rem].size();  // bacha kucha
        if (tmp1>0)
            cout<<ans[rem]*rem1 + arr[rem][tmp1-1]<<endl;
        else
            cout << ans[rem]*rem1 << endl;
    }
    
    return 0;
}