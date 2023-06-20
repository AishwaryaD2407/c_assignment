#include<stdio.h>

int main()
{
	int data,i, pos;

	printf("Enter the data:");
	scanf("%d",&data);

	printf("Enter the position");
	scanf("%d",&pos);

	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf("\n");

	data=data & (~(1<<pos));

	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf("\n");
}


