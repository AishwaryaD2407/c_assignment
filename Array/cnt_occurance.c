#include<stdio.h>

int cnt_freq(int *ptr,int *freq,int size);

int main()
{
	int arr1[50],arr2[50];
	int size,i,cnt;
	int *ptr=arr1, *freq=arr2;
	printf("Enter the size of array :  ");
	scanf("%d",&size);
	printf("Enter the elements of array :  ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=-1;
	}
	cnt=cnt_freq(ptr,freq,size);
	printf("\nFrequency of all elements of array :  ");
	for(i=0;i<size;i++)
	{
		if(arr2[i] != 0)
			printf("%d occurs %d times \n",arr1[i],arr2[i]);
		arr2[i]=-1;
	}
}

int cnt_freq(int *ptr,int *freq,int size)
{
	int cnt, i, j;
	for(i=0;i<size;i++)
	{
		cnt=1;
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i)==*(ptr+j))
			{
				cnt++;
				*(freq+j)=0;
			}
		}
		if(*(freq+i) != 0)
		{
			*(freq+i)=cnt;
		}
	}
}
