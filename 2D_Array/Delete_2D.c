#include<stdio.h>
#include<stdio_ext.h>

void menu(void)
{
	printf("\np:print arrays elements\n");
	printf("d:delete array element\n");
	printf("q:quit program\n");
	printf("\n");
}

void print(int (*arr1)[10], int (*arr2)[10], int n)
{
	int i, j;


	printf("\n");
	for(i=0;i<n;i++,printf("\n"))

			for(j=0;j<n;j++)
			{
				printf("%d\t",arr1[i][j]);
			}

	printf("\n");
	for(i=0;i<n;i++,printf("\n"))

		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}

}

void delete(int(*arr1)[10],int (*arr2)[10],int n)
{
	int i,j, c, k;
	printf("Which array element you want delete :- Array 1  or Array 2 \n");
	printf("Enter 1 or 2 : ");
	__fpurge(stdin);
	scanf("%d",&c);


	switch(c)
	{
		case 1 : printf("Enter a Row NO : \n");
			 scanf("%d",&i);

			 printf("Enter a Column NO : \n");
			 scanf("%d",&j);

			 for(k=n-j;k<n;k++)
			 {
				 arr1[i][k]=arr1[i][k+1];
			 }
			 arr1[i][--k]=0;
			 break;

		case 2 : printf("Enter a Row NO : \n");
			 scanf("%d",&i);

			 printf("Enter a Column NO : \n");
			 scanf("%d",&j);

			 for(k=n-j;k<n;k++)
			 {
				 arr2[i][k]=arr2[i][k+1];
			 }
			 arr2[i][--k]=0;
			 break;

		default : printf("Wrong Input :- Try Again\n");
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

	while(1)
	{
		char c;
		menu();
		__fpurge(stdin);
		printf("Enter a Choice : ");
		scanf("%c",&c);
		switch(c)
		{
			case 'p' :print(arr1,arr2,n);
				  break;
			case 'd' :delete(arr1,arr2,n);
				  break;
			case 'q' :return 0;
			default:printf("No Match found");
				return 0;
		}
	}
}

