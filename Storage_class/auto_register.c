#include<stdio.h>
void automatic(void)
{
	auto int a;
	printf("default value = %d\n",a);
	a=10;
	printf("a=%d\n",a);
}

void registr(void)
{
	register int a;
	printf("default value = %d\n",a);
	a=10;
	printf("a=%d\n",a);
}

int main()
{
	automatic();
	registr();
int a;
printf("%d",a);
}
