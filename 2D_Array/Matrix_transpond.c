#include<stdio.h>
#include<stdlib.h>

int main()
{
	int rows, cols, i, j;
	int **arr1, **arr2;

	printf("Enter the number of rows and cols: ");
	scanf("%d%d",&rows,&cols);

	arr1=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr1[i]=(int *)malloc(cols*sizeof(int));

	arr2=(int **)malloc(rows*sizeof(int));

	for(i=0;i<rows;i++)
		arr2[i]=(int *)malloc(cols*sizeof(int));

	printf("Enter the elements of array:");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&arr1[i][j]);

	for(i=0;i<cols;i++)
		for(j=0;j<rows;j++)
			arr2[i][j]=arr1[j][i];

	printf("Transpose to the matrix are:");
	for(i=0;i<cols;i++)
	{
		printf("\n");
		for(j=0;j<rows;j++)
			printf("%5d",arr2[i][j]);
	}

	for(i=0;i<rows;i++)
	{
		free(arr1[i]);
		free(arr2[i]);
	}
	free(arr1);
	free(arr2);
	return 0;
}

