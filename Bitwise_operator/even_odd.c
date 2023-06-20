#include<stdio.h>

int main()
{
	int data, mask=1;
	printf("Enter the data :");
	scanf("%d",&data);

	if((data & mask) == 0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");


}
