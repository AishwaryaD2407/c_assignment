#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	char temp[30];

	printf("Enter the number:");
	scanf("%d",&num);

	temp[]=itoa(num,temp,3);

	puts(temp);


}
