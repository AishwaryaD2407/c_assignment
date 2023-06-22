#include<stdio.h>

int sum_9(int num);

int main()
{
	int sum, min, max;

	printf("Enter the min and max value:");
	scanf("%d%d",&min,&max);

	for(max;max>=min;max--)
	{
		sum=sum_9(max);
		if(sum==9)
			printf("%d  ",max);
	}

}


int sum_9(int num)
{
	int sum=0, temp=0;
	while(num)
	{
		temp=num%10;
		sum=temp+sum;
		num=num/10;
	}
	return sum;
}
