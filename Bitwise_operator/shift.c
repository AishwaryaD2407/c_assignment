#include<stdio.h>

void display_bit(int x)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",(x>>i)&1);
	}
}

int main()
{
	signed int a;
	unsigned int b;
	printf("Enter the value of a and b :");
	scanf("%d%d", &a, &b);
	display_bit(a);
	printf("\n");
	display_bit(b);
	printf("\n");

	a=a<<4;
	b=b<<4;

	display_bit(a);
	printf("\n");
	display_bit(b);
	printf("\n");
}
