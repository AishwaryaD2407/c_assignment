#include<stdio.h>
#include<stdlib.h>


/* Program to dynamically allocate the memory for 2D array using pointer to an array*/
/*
   int main()
   {
   int rows, cols, i, j;

   printf("Enter the number of rows and cols: ");
   scanf("%d%d",&rows,&cols);

   int (*arr)[cols];
   arr=(int(*)[cols])malloc(rows* cols *sizeof(int));

   printf("Enter the elements of array:");
   for(i=0;i<rows;i++)
   for(j=0;j<cols;j++)
   scanf("%d",&arr[i][j]);

   printf("The elements of array are:");
   for(i=0;i<rows;i++)
   {
   printf("\n");
   for(j=0;j<cols;j++)
   printf("%d   ",arr[i][j]);
   }
   free(arr);
   }
 */

/* Program to dynamically allocate the memory for 2D array using array of pointers*/
/*
int main()
{
	int rows, cols, i, j;

	printf("Enter the number of rows and cols: ");
	scanf("%d%d",&rows,&cols);

	int *arr[rows];
	for(i=0;i<rows;i++)
		arr[i]=(int *)malloc(cols*sizeof(int));

	printf("Enter the elements of array:");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&arr[i][j]);

	printf("The elements of array are:");
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<cols;j++)
			printf("%d   ",arr[i][j]);
	}
	for(i=0;i<rows;i++)
		free(arr[i]);
}
*/

/* Program to dynamically allocate the memory for 2D array */

int main()
{
	int rows, cols, i, j;
	int **arr;

	printf("Enter the number of rows and cols: ");
	scanf("%d%d",&rows,&cols);

	arr=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr[i]=(int *)malloc(cols*sizeof(int));

	printf("Enter the elements of array:");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&arr[i][j]);

	printf("The elements of array are:");
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<cols;j++)
			printf("%d   ",arr[i][j]);
	}
	for(i=0;i<rows;i++)
		free(arr[i]);
free(arr);
return 0;
}

