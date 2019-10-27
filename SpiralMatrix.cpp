#include <iostream>
#include<vector>
using namespace std;

void printSpiral(vector<vector<int>> A)
{
    int row=A.size(), col=A[0].size();
   // cout<<row<<" "<<col;
    int i,c_first=0,c_last=col-1,r_first=0,r_last=row-1;
    
    while(c_first<=c_last && r_first<=r_last)
    {
        /*print the first remaining row*/
        for(i=c_first;i<=c_last;i++)
        {
            cout<<A[r_first][i]<<" ";
        }
        r_first++;

        /* print the last remaining column*/
        for(i=r_first;i<=r_last;i++)
        {
            cout<<A[i][c_last]<<" ";
        }
        c_last--;

        /*print the last remaining row*/
        if(r_first<=r_last)
        {
            for(i=c_last;i>=c_first;i--)
            {
                cout<<A[r_last][i]<<" ";
            }
            r_last--;
        }

        /*print the first remaining column*/
        if(c_first<=c_last)
        {
            for(i=r_last;i>=r_first;i--)
            {
                cout<<A[i][c_first]<<" ";
            }
            c_first++;
        }
    }
    
    
}

int main() {
	//code
	int t,m,n;
	cin>>t;
	//int t1=t;
	while(t--)
	{
	    
	    cin>>n>>m;
	    vector<vector<int>> A(m, vector<int> (n));
    	for(int i=0;i<m;i++)
    	{
    	    for(int j=0;j<n;j++)
    	    cin>>A[i][j];
    	}
    	printSpiral(A);
    	
	}	
	return 0;
}