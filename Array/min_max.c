#include<stdio.h>

void find_minmax(int *ptr,int size)
{
	int i;
	int min=*(ptr), max=*ptr;

	for(i=0;i<size;i++)
	{
		if(*(ptr+i)<min)
		{
			min= *(ptr+i);
		}
		if(*(ptr+i)>max)
		{
			max= *(ptr+i);
		}
	}

	printf("Minimum elements of an array is : %d\n",min);
	printf("Maximum elements of an array is : %d\n",max);

}

int main()
{
	int arr[100];
	int *ptr=arr;
	int size,i;

	printf("Enter the size of an array : ");
	scanf("%d",&size);

	printf("Enter the elements of an array : ");
	for (i=0;i<size;i++)
		scanf("%d",&arr[i]);

	find_minmax(ptr,size);
	return 0;
}
