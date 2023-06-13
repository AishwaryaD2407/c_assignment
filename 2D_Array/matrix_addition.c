#include<stdio.h>
#include<stdlib.h>

int main()
{
	int rows, cols, i, j;
	int **arr1, **arr2, **arr3;

	printf("Enter the number of rows and cols: ");
	scanf("%d%d",&rows,&cols);
	//memory for 1st array
	arr1=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr1[i]=(int *)malloc(cols*sizeof(int));

	//memory for 2nd array
	arr2=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr2[i]=(int *)malloc(cols*sizeof(int));

	//memory for 3rd array
	arr3=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr3[i]=(int *)malloc(cols*sizeof(int));

	printf("Enter the elements of array:");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&arr1[i][j]);

	printf("Enter the elements of array:");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&arr2[i][j]);

	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			arr3[i][j]=arr1[i][j]+arr2[i][j];


	printf("The elements of array are:");
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<cols;j++)
			printf("%5d",arr3[i][j]);
	}

	for(i=0;i<rows;i++)
	{
		free(arr1[i]);
		free(arr2[i]);
		free(arr3[i]);
	}
	free(arr1);
	free(arr2);
	free(arr3);
	return 0;
}


