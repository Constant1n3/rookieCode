/* Program to check for majority element in a sorted array */
# include <stdio.h> 
# include <stdbool.h>
#include<iostream>
using namespace std;

int getLeftPosition(int arr[],int l,int r, int key)
{
    int m;
    while(r-l>1)
    {
        m=l+(r-l)/2;
        if(arr[m]>=key)
        r=m;
        else
        l=m;
    }
    return r;
}
bool isMajority(int arr[],int n, int x)
{
    int lastIdx= n%2 ? (n/2+1):n/2;
    //cout<<lastIdx<<" ";
    int idx=getLeftPosition(arr,-1,n-1,x);
    //cout<<idx<<" ";
    if(arr[idx]==x&&arr[idx+lastIdx-1]==x)
    return 1;
    else return 0;
}

/* Driver program to check above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 3, 3, 3, 10}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int x = 3; 
	if (isMajority(arr, n, x)) 
		printf("True"); 
	else
		printf("False"); 
	return 0; 
} 
