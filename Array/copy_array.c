#include<stdio.h>
#define MAX_SIZE 50

void display_arr(int *arr,int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
}

int main()
{
	int arr1[MAX_SIZE],arr2[MAX_SIZE];
	int size,i;
	int *ptr1=arr1,*ptr2=arr2;
	int *lst_arr=arr1+9;

	printf("Enter the size of an array : ");
	scanf("%d",&size);

	printf("Enter the elements of array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr1+i);
	}

	printf("\n First array elements before :");
	display_arr(arr1,size);
	printf("\n second array elements before :");
	display_arr(arr2,size);

	while(ptr1 <= lst_arr)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}

	printf("\n First array elements after :");
	display_arr(arr1,size);
	printf("\n second array elements after :");
	display_arr(arr1,size);

	return 0;
}
