#include<stdio.h>

void Add(int (*arr1)[10][10], int (*arr2)[10][10], int n)
{
	int i, j, k, add[10][10][10];

	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++,printf("\n"))
			for(k=0;k<n;k++)
			{
				add[i][j][k]=arr1[i][j][k]+arr2[i][j][k];

				printf("%d\t",add[i][j][k]);
			}

}
int main()
{
	int arr1[10][10][10], arr2[10][10][10];

	int sum, i, j, k, n;

	printf("Enter the size of array :");
	scanf("%d",&n);

	printf("Enter the elements of 1D array for arr1 :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&arr1[i][j][k]);

	printf("Enter the elements of 1D array for arr2:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&arr2[i][j][k]);

	printf("\n");
	Add(arr1,arr2,n);
}

