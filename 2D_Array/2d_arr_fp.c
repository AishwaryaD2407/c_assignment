#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void input(int arr[ROW][COL]);

void (*fp)(int arr[ROW][COL]);

int main()
{
	int i, j;
	int arr[3][3];
	//arr= (int(*)[col])malloc(row*col*sizeof(int));
	fp=input;
	printf("Enter the elements :");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&arr[i][j]);
	fp(arr);
}

void input(int arr[ROW][COL])
{
	int i, j;
	printf("Enter the elements :");
	for(i=0;i<ROW;i++)
	{
		printf("\n");
		for(j=0;j<COL;j++)
			printf("%5d",arr[i][j]);
	}
}
