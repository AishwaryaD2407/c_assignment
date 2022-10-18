#include<stdio.h>
#define INT_BITS 32

int leftRotate(int n, unsigned int d)
{
	return (n << d)|(n >> (INT_BITS - d));
}
int rightRotate(int n, unsigned int d)
{
	return (n >> d)|(n << (INT_BITS - d));
}

int main()
{
	int n ;
	int d ;
	printf("Enter the integer and the position ");
	scanf("%d%d",&n,&d);
	printf("Left Rotation of %d by %d is\n ", n, d);
	printf("%d", leftRotate(n, d));
	printf("Right Rotation of %d by %d is\n ", n, d);
	printf("%d", rightRotate(n, d));
	getchar();
}
