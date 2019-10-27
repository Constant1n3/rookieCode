#include<bits/stdc++.h>
using namespace std;

int h[10];

// void print(int arr[])
// {
//     for (int i = 0  ; i < 10; ++i)
//         cout << h[i];
//     cout << endl;
// }

int main()
{
    string s;
    int n;
    cin >>n >> s;
    int l=0,r=9;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            h[l]=1;
            for (int x = 0; x < 10; x++)
            {
                if (h[x] == 0)
                {
                    l = x;
                    break;
                }
            }
        }
        if(s[i]=='R')
        {
            h[r]=1;
            for (int x = 9; x >= 0; --x)
            {
                if (h[x] == 0)
                {
                    r = x;
                    break;
                }
            }
        }
        else
        {
            int temp = s[i]-'0';
            h[temp]=0;
            if (temp < l)
                l = temp;
            else if (temp > r)
                r = temp;
        }
        // print(h);
    }
    for(int i = 0  ; i < 10; ++i)
    {
        cout << h[i];
    }
}