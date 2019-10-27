#include<stdio.h>

int main()
{
    extern x;
    printf("%d",++x);
}
int x=10;