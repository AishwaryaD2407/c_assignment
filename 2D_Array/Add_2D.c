#include<stdio.h>

void Add(int (*arr1)[10], int (*arr2)[10], int n)
{
	int i, j, add[10][10]; 
	
	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++)
		{
			add[i][j]=arr1[i][j]+arr2[i][j];

			printf("%d\t",add[i][j]);
		}	

}
int main()
{
	int arr1[10][10], arr2[10][10];

	int sum, i, j, n;

	printf("Enter the size of array :");
	scanf("%d",&n);

	printf("Enter the elements of 1D array for arr1 :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr1[i][j]);

	printf("Enter the elements of 1D array for arr2:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr2[i][j]);


	Add(arr1,arr2,n);
}
