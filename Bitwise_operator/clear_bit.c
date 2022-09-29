

#include<stdio.h>
int main()
{
	int data,bit,pos;
	printf("Enter the number = ");
	scanf("%d",&data);
	printf("Enter bit position = ");
	scanf("%d",&pos);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",((data>>bit)&1));
	}
	data=data&(~(1<<pos));
	printf("\n");
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",((data>>bit)&1));
	}


}




