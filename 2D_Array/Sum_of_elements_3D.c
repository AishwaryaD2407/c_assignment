#include<stdio.h>

int main()
{

	int A[2][3][3], B[2][3][3], i, j, k, sum, sum2;

	printf("Enter the elements of 2D array A : ");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&A[i][j][k]);
			}
	printf("Enter the elements of 2D array B : ");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&B[i][j][k]);
			}

	printf("Elements of array A is :\n");
	for(i=0;i<2;i++,printf("\n"))
		for(j=0;j<3;j++,printf("\t"))
			for(k=0;k<3;k++)
			{
				printf("%d ",A[i][j][k]);
			}
	printf("\n");

	printf("Elements of array B is :\n");
	for(i=0;i<2;i++,printf("\n"))
		for(j=0;j<3;j++,printf("\t"))
			for(k=0;k<3;k++)
			{
				printf("%d ",B[i][j][k]);
			}


	for(i=0;i<2;i++)
	{
		sum=0,sum2=0;
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				sum2=sum2+B[i][j][k];
				sum=sum+A[i][j][k];
			}
		printf("sum of %d row of array A is : %d  \t  sum of %d row of array B is : %d \n",i,sum,i,sum2 );
	}
}

