#include<stdio.h>

int main()
{
	int data, i, cnt0=0, cnt1=0;
	printf("Enter the data:");
	scanf("%d",&data);

	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf("\n");

	for(i=31;i>=0;i--)
	{
		if(data&1)
			cnt1++;
		else
			cnt0++;
		data=data>>1;
	}
	printf("%d= cnt of 1\t %d= cnt of 0\n",cnt1,cnt0);
}
