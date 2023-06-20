#include<stdio.h>

int main()
{
	int data,i,power_2,mask;

	printf("Enter the Number:");
	scanf("%d",&data);


	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf("\n");

	power_2 = data&&(data&(data-1));
	mask =  !(data & 0xAAAAAAAA);

	if(power_2 && mask)
		printf("Power of 4");
	else
		printf("Not Power of 4");
}
