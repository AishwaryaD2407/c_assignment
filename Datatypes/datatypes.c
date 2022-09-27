#include<stdio.h>
int main()
{
	char ch;
	unsigned char ch1;

	short int c;
	unsigned short d;

	int a;
	unsigned int b;

	float p;

	long int x;
	unsigned long y;

	double i;

	printf("char         	= %lu\n",sizeof(ch));
	printf("unsigned char   = %lu\n",sizeof(ch1));

	printf("short int 	= %lu\n",sizeof(c));
	printf("unsigned short  = %lu\n",sizeof(d));

	printf("int 		= %lu\n",sizeof(a));
	printf("unsigned int 	= %lu\n",sizeof(b));

	printf("float 		= %lu\n",sizeof(p));

	printf("long int 	= %lu\n",sizeof(x));
	printf("unsigned long   = %lu\n",sizeof(y));

	printf("double 		= %lu\n",sizeof(i));

}
