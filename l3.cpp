#include<bits/stdc++.h>
using namespace std;
#define ll long long
void swap(char &a, char&b)
{
    char temp=b;
    b=a;
    a=temp;
}
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t>0){
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            //cout<<s[i]<< " " <<s[i+1];
            i=i+1;
        }
    }
    //cout<<s<<" "<<cnt++<<endl;
    t--;
    }
    //cout<<endl;
    cout<<s;

}