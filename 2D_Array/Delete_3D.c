#include<stdio.h>
#include<stdio_ext.h>

void menu(void)
{
	printf("\np:print arrays elements\n");
	printf("d:delete array element\n");
	printf("q:quit program\n");
	printf("\n");
}

void print(int (*arr1)[10][10], int (*arr2)[10][10], int n)
{
	int i, j, k;


	printf("\n");
	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++,printf("\t"))
			for(k=0;k<n;k++)
			{
				printf("%d\t",arr1[i][j][k]);
			}

	printf("\n");
	for(i=0;i<n;i++,printf("\n"))

		for(j=0;j<n;j++,printf("\t"))
			for(k=0;k<n;k++)
			{
				printf("%d\t",arr2[i][j][k]);
			}

}

void delete(int(*arr1)[10][10],int (*arr2)[10][10],int n)
{
	int i,j,k,l,c;
	printf("Which array element you want delete :- Array 1  or Array 2 \n");
	printf("Enter 1 or 2 : ");
	__fpurge(stdin);
	scanf("%d",&c);

	switch(c)
	{
		case 1 : printf("Enter the value of i : \n");
			 scanf("%d",&i);
			 
			printf("Enter the value of l : \n");
			 scanf("%d",&l);

			 printf("Enter the value of j : \n");
			 scanf("%d",&j);

			 for(k=n-j;k<n;k++)
			 {
				 arr1[i][l][k]=arr1[i][l][k+1];
			 }
			 arr1[i][l][--k]=0;
			 break;

		case 2 : printf("Enter a Row NO : \n");
			 scanf("%d",&i);
			
			printf("Enter the value of l : \n");
			 scanf("%d",&l);

			 printf("Enter a Coloum NO : \n");
			 scanf("%d",&j);

			 for(k=n-j;k<n;k++)
			 {
				 arr2[i][l][k]=arr2[i][l][k+1];
			 }
			 arr2[i][l][--k]=0;
			 break;

		default : printf("Wrong Input :- Try Again\n");
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


