#include<stdio.h>

#define R 3
#define C 4
#define R1 C
#define C1 2

int main()
{
	int mat1[R][C], mat2[R1][C1], mat3[R][C1];
	int  i, j, k;

	printf("Enter the matrix 1 elements :");
	for(i=0;i<R;i++)
		for(j=0;j<C;j++)
			scanf("%d",&mat1[i][j]);

	printf("Enter the matrix 1 elements :");
	for(i=0;i<R1;i++)
		for(j=0;j<C1;j++)
			scanf("%d",&mat2[i][j]);

	for(i=0;i<R;i++)
		for(j=0;j<C1;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<C;k++)
				mat3[i][j] += mat1[i][k] * mat2[k][j];
		}

	for(i=0;i<R;i++)
	{
		printf("\n");
		for(j=0;j<C1;j++)
			printf("%5d",mat3[i][j]);
	}
}
