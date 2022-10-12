#include<stdio.h>
struct endian {
	int a;
	char b;
};

int main()
{
	int pos;
	struct endian var;
	var.a=1;
	printf("Enter a bit position");
	scanf("%d",&pos);
	//var.b=var.a;
	var.b=(var.a<<pos);
if(var.b)
	printf("Little Endian");
else
	printf("Big  Endian");

}
