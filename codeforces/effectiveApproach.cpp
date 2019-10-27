#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
    int n,m;
    cin >> n;
    int temp, a, b;
    vector<int> v(n+1,0);
    for(int i = 1; i <= n; ++i)
    {
        cin >> temp;
        v[temp] = i;
    }
    cin >> m;
    ll left_sum= 0, right_sum = 0;
    for(int i = 1; i <= m; ++i)
    {
        cin >> temp;
        left_sum += v[temp];
        right_sum += n-v[temp]+1;
    }
    cout << left_sum << " " << right_sum << endl;
}