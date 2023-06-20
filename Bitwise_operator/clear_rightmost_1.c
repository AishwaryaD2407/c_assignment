#include<stdio.h>

void display_bit(int data)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",(data>>i)&1);
	}
printf("\n");
}

int main()
{
	int data;
	printf("Enter the number:");
	scanf("%d",&data);
	display_bit(data);
	data=data & (data-1);
	display_bit(data);

}
