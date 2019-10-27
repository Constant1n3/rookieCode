#include<stdio.h>
#include<stdlib.h>

int main()
{
	char t;
	int *ptr = (int *)malloc(sizeof(int));
	scanf("%d",ptr);
	printf("%d",*ptr);
	printf("Trying to wait");
	getchar();
}

