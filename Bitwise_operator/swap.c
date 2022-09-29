

#include<stdio.h>
int main()
{
	int data1,data2,bit,pos;
	printf("Enter the number = ");
	scanf("%d%d",&data1,&data2);

	printf("Before swap : data1 = %d  data2 = %d\n",data1,data2);

	data1^=data2^=data1^=data2;

	printf("After swap : data1 = %d  data2 = %d\n",data1,data2);

}

