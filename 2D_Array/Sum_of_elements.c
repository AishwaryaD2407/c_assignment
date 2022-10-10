

#include<stdio.h>

int main()
{

	int A[3][3]={{1,2,3},
		{4,5,6},
		{7,8,9}};

	int B[3][3],i,j,sum,sum2;

	printf("Enter the elements of 2D array B : ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}

	printf("Elements of array A is :\n");
	for(i=0;i<3;i++,printf("\n"))
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]);
		}
	printf("\n");

	printf("Elements of array B is :\n");
	for(i=0;i<3;i++,printf("\n"))
		for(i=0;i<3;i++,printf("\n"))
			for(j=0;j<3;j++)
			{
				printf("%d ",B[i][j]);
			}


	for(i=0;i<3;i++)
	{
		sum=0,sum2=0;
		for(j=0;j<3;j++)
		{
			sum2=sum2+B[i][j];
			sum=sum+A[i][j];
		}
		printf("sum of %d row of array A is : %d  \t  sum of %d row of array B is : %d \n",i,sum,i,sum2 );
	}
}
