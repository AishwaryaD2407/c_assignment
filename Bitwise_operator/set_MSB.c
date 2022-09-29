



#include<stdio.h>
int main()
{
	int data,bit;
	printf("Enter the number = ");
	scanf("%d",&data);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",((data>>bit)&1));
	}
	if(data=data&(1<<31))
		printf("\nBit is set\n");
	else
		printf("\nBit is clear\n");
}
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                  
