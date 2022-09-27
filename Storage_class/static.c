#include<stdio.h>
int add(int);
int main()
{
	int a=6,result;
	result=	add(a);
	printf("result = %d\n",result);
	result=	add(a);
	printf("result = %d\n",result);
}
int add(int a)
{
	static int sum;
	printf("value of static is : %d\n",sum);
	sum=sum+a;
	return sum;

}
